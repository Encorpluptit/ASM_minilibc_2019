bits                64
section             .text
global              strchr
global              _strchr

    ;; char *strchr(const char *s, int c);

_strchr:
strchr:
    xor         rax, rax

.loop:
    cmp         byte [rdi], sil
    je          .rt
    cmp         byte [rdi], 0x00
    je          .rt_null
    inc         rdi
    jmp         .loop

.rt:
    mov         rax, rdi
    jmp         .end

.rt_null:
       mov     rax, 0x0
       RET

.end:
    ret
