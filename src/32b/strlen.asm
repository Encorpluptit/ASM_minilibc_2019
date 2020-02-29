    bits        32
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
; @reg[in]      rdi     Address of the string.
; @reg[out]     rax     Length of the string.
; @killedregs
;-----------------------------------------------------------------------------

strlen:
    mov         esi, edi                ; Store rdi for return operation

.loop:
    cmp         byte [edi], 0x0         ; If *s == '\0', jump to end label.
    je          .end                    ;
    inc         edi                     ; Loop on rdi
    jmp         .loop                   ;

.end:
    sub         edi, esi                ; Found address - start address == lenght
    mov         eax, edi                ; Return lenght
    ret                                 ;
