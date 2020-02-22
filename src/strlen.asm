    bits        64
    section     .text
    global      strlen

%ifdef TESTS
    global      my_strlen
my_strlen:
%endif

;-----------------------------------------------------------------------------
; @function     strlen
; @prototype    size_t strlen(const char *s);
; @brief        Calculates the length of the string pointed to by s,
;               excluding the terminating null byte ('\0').
; @reg[in]      rdi     Address of the first string.
; @reg[out]     rax     Return value.
; @killedregs
;-----------------------------------------------------------------------------

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
