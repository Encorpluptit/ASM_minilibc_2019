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
    xor         rcx, rcx                        ; Reset rcx (for doc purpuses)

.loop:
    mov         al, [rdi + rcx]                 ;
    cmp         byte [rsi + rcx], 0x0
    jz          .found
    cmp         al, [rsi + rcx]
    jne         .restart
    inc         rcx
    jmp         .loop

.found:
    mov         rax, rdi

.end:
    ret
