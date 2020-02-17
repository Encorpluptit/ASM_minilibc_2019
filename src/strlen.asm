%include "libasm.inc"

    ;; size_t strlen(const char *s);

_strlen:
    xor         rax, rax
    cmp         byte [rdi], 0x0
    je          END
    jmp         .loop

.loop:
    inc         rax
    inc         rdi
    cmp         byte [rdi], 0x0
    jne         .loop
    jmp         END
