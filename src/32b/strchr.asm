    bits        32
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
.loop:
    cmp         byte [edi], sil         ; Compare byte in rdi with char to find
    je          .found                  ;
    cmp         byte [edi], 0x00        ; Compare byte in rdi with '\0'
    je          .rt_null                ;
    inc         edi                     ; Loop on rdi
    jmp         .loop                   ;

.found:
    mov         eax, edi                ; Return found adress
    ret                                 ;

.rt_null:
    mov     eax, 0x0                    ; Return NULL
    ret                                 ;
