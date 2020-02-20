	bits                64
	section             .text
	global              rindex
	global              _rindex

    ;; char *rindex(const char *s, int c);

_rindex:
rindex:
    xor         rax, rax

.loop:
    cmp         [rdi], sil
    je          .found
    cmp         byte [rdi], 0x0
    je          .end
    inc         rdi
    jmp         .loop

.found:
    mov         rax, rdi
    cmp         byte [rdi], 0x0
    je          .end
    inc         rdi
    jmp         .loop

.end:
    ret
