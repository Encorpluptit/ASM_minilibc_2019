bits                64
section             .text
	global              memmove
	global              _memmove

    ;; void *memmove(void *dest, const void *src, size_t n);

_memmove:
memmove:
    ; Preserve destination address because we have to return it.
    mov         rax, rdi
    ; If dest < src, we can always do a fast pointer-incrementing move.
    ; If dest == src, do nothing.
    cmp         rdi, rsi
    je          .end
    jb          .byte_to_byte
    ; If dest > src and there are no overlapping regions (dest >= src+num), we
    ; can still do a fast pointer-incrementing move.
    mov         rcx, rsi
    add         rcx, rdx
    cmp         rdi, rcx
    jae         .byte_to_byte

; If dest > src and dest < src+num, we have to do a right-to-left move to
; preserve overlapping data.
.cpy_left:
    std                         ; Set the direction flag so copying is right-to-left.
    mov         rcx, rdx        ; Set the move count register.
    dec         rdx             ; Update pointers to the right-hand side (minus one).
    add         rsi, rdx        ;
    add         rdi, rdx        ;
    rep         movsb           ; Do a byte-by-byte move.
    cld                         ; Reset the direction flag.
    ret

.byte_to_byte:          ; Do a byte-by-byte move.
    mov         rcx, rdx
    rep         movsb

.end:
    ret
