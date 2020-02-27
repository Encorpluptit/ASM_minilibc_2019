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
; @reg[in]      rdi     Address of the first string.
; @reg[in]      rsi     Address of the second string.
; @reg[out]     rax     Return value.
; @killedregs   rcx, al
;-----------------------------------------------------------------------------

strstr:
    xor         rax, rax
    xor         rcx, rcx
    jmp         .loop

.restart:
    cmp         al, 0x0
    je          .end
    inc         rdi
    xor         rcx, rcx

.loop:
    mov         al, [rdi + rcx]
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
