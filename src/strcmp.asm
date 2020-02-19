bits                64
section             .text
global              strcmp
global              _strcmp

    ;; int strcmp(const char *s1, const char *s2);

_strcmp:
strcmp:
    xor         r8, r8
    xor         rcx,rcx

.loop:
    mov         r8b, [rsi + rcx]
    mov         al, [rdi + rcx]
    cmp         r8b, 0x0
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

.end:
    ret
