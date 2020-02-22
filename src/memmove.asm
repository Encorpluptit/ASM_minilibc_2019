    bits        64
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
    mov         rax, rdi        ; Preserve destination address to return it.

    cmp         rdi, rsi
    je          .end            ; If dest == src, do nothing.
    jb          .byte_to_byte   ; If dest < src, we can always do a fast pointer-incrementing move.

    mov         rcx, rsi        ; Store source memory area
    add         rcx, rdx        ; Update pointer with number of byte to cpy (rdx)
    cmp         rdi, rcx        ; If (dest >= src+num), there are no overlapping regions
    jae         .byte_to_byte   ; we can still do a fast pointer-incrementing move.


; If dest > src and dest < src+num, we have to do a right-to-left move to preserve overlapping data.
.cpy_left:
    std                         ; Set the direction flag so copying is right-to-left.
    mov         rcx, rdx        ; Set the move count register.
    dec         rdx             ; Update pointers to the right-hand side (minus one).
    add         rsi, rdx        ;
    add         rdi, rdx        ;
    rep         movsb           ; Do a byte-by-byte move.
    cld                         ; Reset the direction flag.
    ret

; Do a fast pointer-incrementing move.
.byte_to_byte:
    mov         rcx, rdx
    rep         movsb

.end:
    ret
