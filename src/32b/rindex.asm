    bits        32
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
; @reg[out]     rax     Found adress.
; @killedregs
;-----------------------------------------------------------------------------

rindex:
    xor         eax, eax                ; Set to 0 in case of return.

.loop:
    cmp         byte [edi], sil         ; Compare char to find byte in s.
    je          .found                  ;
    cmp         byte [edi], 0x0         ; Check if end of s.
    je          .end                    ;
    inc         edi                     ; Loop on rdi.
    jmp         .loop                   ;

.found:
    mov         eax, edi                ; Preserve found adress to return it.
    cmp         byte [rdi], 0x0         ; Compare byte in rdi with '\0'
    je          .end                    ;
    inc         edi                     ; Loop on rdi.
    jmp         .loop                   ;

.end:
    ret                                 ; Return Stored address.
