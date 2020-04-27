    bits        64
    section     .text
    global      strstr

%ifdef TESTS
    global      my_strstr
my_strstr:
%endif

;-----------------------------------------------------------------------------
; @function     strstr
; @prototype    char *strstr(const char *haystack, const char *needle);
; @brief        Finds the first occurrence of the substring needle
;               in the string haystack.
; @details      The terminating null bytes ('\0') are not compared.
; @reg[in]      rdi     Address of the first string (haystack).
; @reg[in]      rsi     Address of the second string (needle).
; @reg[out]     rax     Return value.
; @killedregs   rcx, al
;-----------------------------------------------------------------------------

strstr:
    xor         rax, rax                        ; Xor rax for security (Useless, for doc purposes)
    xor         rcx, rcx                        ; Xor rcx for security (Useless, for doc purposes)
    jmp         .loop                           ; Jump to loop,

.restart:
    cmp         al, 0x0                         ; Check if al == \0
    je          .end                            ; If equal stop fct.
    inc         rdi                             ; Increment s1 (haystack)
    xor         rcx, rcx                        ; Reset rcx (xor for doc purpuses)

.loop:
    mov         al, [rdi + rcx]                 ; Move char from s1 (haystack) + idx into al
    cmp         byte [rsi + rcx], 0x0           ; Compare char from s2 (needle) + idx with \0
    jz          .found                          ; If end of needle, substr found. Jump to found
    cmp         al, [rsi + rcx]                 ; Compare char from s1 and s2
    jne         .restart                        ; if different, jump to restart label to increment variables
    inc         rcx                             ; if equal increment rcx and restart loop
    jmp         .loop                           ;

.found:
    mov         rax, rdi                        ; if found move found ptr into rax

.end:
    ret
