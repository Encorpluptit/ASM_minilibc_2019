
    ;; void *memset(void *s, int c, size_t n);

%ifndef _TESTS_

%include "libasm.inc"

memset:
%else

bits                64
section             .text
global              _memset

END:
    ret
%endif
_memset:
    mov         rax, rdi

loop_memset:
    cmp         rdx, 0x0
    je          END
    dec         rdx
    mov         [rdi + rdx], sil
    jmp         loop_memset
