	bits                64
	section             .text
	global              strlen
	global              _strlen

    ;; size_t strlen(const char *s);

_strlen:
strlen:
    xor         rax, rax

.loop:
    cmp         byte [rdi], 0x0
    je          .end
    inc         rax
    inc         rdi
    jne         .loop
    jmp         .end

.end:
    ret
