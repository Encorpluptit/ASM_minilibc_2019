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
    xor         rax, rax                ; Set to 0 in case of return

.loop:
    cmp         byte [rdi], sil         ; Compare char to find byte in s
    je          .found
    cmp         byte [rdi], 0x0         ; Check if end of s.
    je          .end                    ; TODO : EXHANGE with abrove et todo remove below
    inc         rdi                     ; Loop on rdi
    jmp         .loop

.found:
    mov         rax, rdi                ; Preserve found adress to return it
    cmp         byte [rdi], 0x0         ; TODO : REMOVE
    je          .end
    inc         rdi                     ; Loop on rdi
    jmp         .loop

.end:
    ret                                 ; Return
