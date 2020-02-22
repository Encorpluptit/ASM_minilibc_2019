    bits        64
    section     .text
    global      strcmp

%ifdef TESTS
    global      my_strcmp
my_strcmp:
%endif

;-----------------------------------------------------------------------------
; @function     strcmp
; @prototype    int strcmp(const char *s1, const char *s2);
; @brief        Compares the two strings s1 and s2.
; @details      It returns an integer less than, equal to, or greater than zero
;               if s1 is found, respectively, to be less than,
;               to match, or be greater than s2..
; @reg[in]      rdi     Address of the first string.
; @reg[in]      rsi     Address of the second string.
; @reg[out]     rax     Return value.
; @killedregs   rcx, r8, al
;-----------------------------------------------------------------------------

;-----------------------------------------------------------------------------
;                       MACRO(S)
%macro ASSERT 1
    cmp         %1, 0x0                 ; If char == '\0', jump to return label end.
    je          .end                    ;
%endmacro
;-----------------------------------------------------------------------------

strcmp:
    xor         rcx, rcx                ; Reset counter to 0 to be sure.

.loop:
    mov         r8b, [rsi + rcx]        ; Store actual byte from rsi to r8b
    mov         al, [rdi + rcx]         ; Store actual byte from rdi to r8b
    ASSERT      r8b                     ; Assert r8b not '\0'
    ASSERT      al                      ; Assert r9b not '\0'
    cmp         al, r8b                 ; Compare bytes from rsi and rdi
    jne         .end                    ; If not equal, jump to return label
    inc         rcx                     ; Loop on both strings with rcx
    jmp         .loop                   ;

.end:
    sub         al, r8b
    movsx       rax, al
    ret
