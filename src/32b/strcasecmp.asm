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

;-----------------------------------------------------------------------------
;                       MACRO(S)
%macro CCHECK 2
    cmp         %1, 'A'                 ; Check if char is greater than begining of ascii letter.
    jl          %2                      ; Jump to next label if not.
    cmp         %1, 'Z'                 ; Check if char not an Uppercase letter.
    jg          %2                      ; Jump to next label if not.
    xor         %1, ' '                 ; Xor Uppercase to transform it in lowercase.
%endmacro

%macro ASSERT 1
    cmp         %1, 0x0                 ; If char == '\0', jump to return label end.
    je          .end                    ;
%endmacro
;-----------------------------------------------------------------------------

strcasecmp:
.check_rdi:
    mov         e8b, [edi]              ; Store byte in rdi into r8b to compare and return.
    CCHECK      e8b, .check_rsi         ; If byte not Uppercase, jump to check_rsi label.

.check_rsi:
    mov         e9b, [esi]              ; Store byte in rsi into r9b to compare and return.
    CCHECK      e9b, .cmp               ; If byte not Uppercase, jump to cmp label.

.cmp:
    ASSERT      e8b                     ; Assert r8b not '\0'.
    ASSERT      e9b                     ; Assert r9b not '\0'.
    cmp         e8b, e9b                ; Compare bytes from rdi and rsi.
    jne         .end                    ; If not Equal, jump to end label.
    inc         edi                     ; Loop on rdi and rsi.
    inc         esi                     ;
    jmp         .check_rdi              ;

.end:
    sub         e8b, e9b
    movsx       eax, e8b
    ret
