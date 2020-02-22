    bits        64
    section     .text
    global      rindex


%ifdef TESTS
    global      my_rindex
my_rindex:
%endif

;-----------------------------------------------------------------------------
; @function     rindex
; @prototype    char *rindex(const char *s, int c);
; @brief        Returns a pointer to the last occurrence of the character c
;               in the string s.
; @reg[in]      rdi     Address of the memory to search in.
; @reg[in]      sil     Char to find (Least significant byte).
; @reg[out]     rax     Index found.
; @killedregs
;-----------------------------------------------------------------------------

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
