bits                64
section             .text
global              strncmp
global              _strncmp

    ;; int strncmp(const char *s1, const char *s2, size_t n);

_strncmp:
strncmp:
    xor         rax, rax
    xor         r8, r8
    xor         rcx,rcx

.loop:
    mov         r8b, byte [rsi + rcx]
    mov         al, byte [rdi + rcx]
    cmp         rcx, rdx
    je          .rt_null
    cmp         r8, 0x0
    je          .rt_end
    cmp         rax, 0x0
    je          .rt_end
    cmp         al, r8b
    jne         .rt_end
    inc         rcx
    jmp         .loop

.rt_end:
    sub         al, r8b
    movsx       rax, al
    jmp         .end

.rt_null:
    mov     rax, 0x0
    ret

.end:
    ret
