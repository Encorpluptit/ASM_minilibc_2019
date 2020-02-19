bits                64
section             .text
global              memset
global              _memset

    ;; void *memset(void *s, int c, size_t n);

_memset:
memset:
    mov         rax, rdi

.loop:
    cmp         rdx, 0x0
    je          .end
    dec         rdx
    mov         [rdi + rdx], sil
    jmp         .loop

.end:
    ret
