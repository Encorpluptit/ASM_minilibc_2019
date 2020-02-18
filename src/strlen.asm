%ifndef _TESTS_

%include "libasm.inc"

%else

bits                64
section             .text
global              _strlen

END:
    ret
%endif


    ;; size_t strlen(const char *s);

%ifndef _TESTS_
strlen:
%endif
_strlen:
    xor         rax, rax

.loop:
    cmp         byte [rdi], 0x0
    je          END
    inc         rax
    inc         rdi
    jne         .loop
    jmp         END
