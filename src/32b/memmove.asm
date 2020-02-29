    bits        32
    section     .text
    global      memmove

%ifdef TESTS
    global      my_memmove
my_memmove:
%endif

;-----------------------------------------------------------------------------
; @function     memmove
; @brief        Move bytes from one memory region to another, even if the
;               regions overlap.
; @prototype    void *memmove(void *dest, const void *src, size_t n);
; @reg[in]      rdi     Address of the destination memory area.
; @reg[in]      rsi     Address of the source memory area.
; @reg[in]      rdx     Number of bytes to copy.
; @reg[out]     rax     Destination address.
; @killedregs   rcx
;-----------------------------------------------------------------------------

memmove:
    mov         eax, edi        ; Preserve destination address to return it.

    cmp         edi, esi
    je          .end            ; If dest == src, do nothing.
    jb          .byte_to_byte   ; If dest < src, we can always do a fast pointer-incrementing move.

    mov         ecx, esi        ; Store source memory area.
    add         ecx, edx        ; Update pointer with number of byte to cpy (rdx).
    cmp         edi, ecx        ; If (dest >= src+num), there are no overlapping regions
    jae         .byte_to_byte   ; we can still do a fast pointer-incrementing move.


; If dest > src and dest < src+num, we have to do a right-to-left move to preserve overlapping data.
.cpy_left:
    std                         ; Set the direction flag so copying is right-to-left.
    mov         ecx, edx        ; Set the move count register.
    dec         edx             ; Update pointers to the right-hand side (minus one).
    add         esi, edx        ;
    add         edi, edx        ;
    rep         movsb           ; Do a byte-by-byte move.
    cld                         ; Reset the direction flag.
    ret

; Do a fast pointer-incrementing move.
.byte_to_byte:
    mov         ecx, edx        ; Do a byte-by-byte move until rcx == 0.
    rep         movsb           ;

.end:
    ret                         ; Return destination address.
