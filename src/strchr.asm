    bits        64
    section     .text
    global      strchr

%ifdef TESTS
    global      my_strchr
my_strchr:
%endif

;-----------------------------------------------------------------------------
; @function     strchr
; @prototype    char *strchr(const char *s, int c);
; @brief        Returns a pointer to the first occurrence of the character c
;               in the string s.
; @reg[in]      rdi     Address of the memory to search in.
; @reg[in]      sil     Char to find (Least significant byte).
; @reg[out]     rax     Index found.
; @killedregs
;-----------------------------------------------------------------------------

strchr:
    xor         rax, rax

.loop:
    cmp         byte [rdi], sil
    je          .rt
    cmp         byte [rdi], 0x00
    je          .rt_null
    inc         rdi
    jmp         .loop

.rt:
    mov         rax, rdi
    jmp         .end
    ;; ret

.rt_null:
    mov     rax, 0x0
    ;; ret

.end:
    ret
    ;; remove
