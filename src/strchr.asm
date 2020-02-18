
    ;; char *strchr(const char *s, int c);

%ifndef _TESTS_

%include "libasm.inc"

strchr:
%else

bits                64
section             .text
global              _strchr

RT_NULL:
       mov     rax, 0x0
       RET

END:
    ret

%endif
_strchr:
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
