    bits        64
    section     .text
    global      strcasecmp

%ifdef TESTS
    global      my_strcasecmp
my_strcasecmp:
%endif

;-----------------------------------------------------------------------------
; @function     strcasecmp
; @prototype    int strcasecmp(const char *s1, const char *s2);
; @brief        performs a byte-by-byte comparison of the strings s1 and s2,
;               ignoring the case of the characters.
; @details      It returns an integer less than, equal to, or greater than zero
;               if s1 is found, respectively, to be less than, to match,
;               or be greater than s2.
; @reg[in]      rdi     Address of the first string.
; @reg[in]      rsi     Address of the second string.
; @reg[out]     rax     Return value.
; @killedregs   rcx, al
;-----------------------------------------------------------------------------

strcasecmp:
	jmp start1

start1:
	mov r8b, [rdi]
	cmp r8b, 'A'
	jl start2

t_lower1:
	add r8b, ' '

start2:
	mov r9b, [rsi]
	cmp r9b, 'A'
	jl compare

t_lower2:
	add r9b, ' '

compare:
	cmp r8b, r9b
	jne .end
	cmp r8b, 0x0
	je .end
	cmp r9b, 0x0
	je .end
	inc rsi
	inc rdi
	jmp start1

.end:
	sub r8b, r9b
	movsx rax, r8b
	ret
