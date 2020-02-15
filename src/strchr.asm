%include "libasm.inc"

    ;; char *strchr(const char *s, int c);

strchr:
    xor         rax, rax

.loop:
    cmp         byte [rdi], sil
    je          .return
    cmp         byte [rdi], 0x00
    je          RT_NULL
    inc         rdi
    jmp         .loop

.return:
    mov         rax, rdi
    jmp         END
