%include "libasm.inc"

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
