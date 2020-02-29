    bits        32
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
    xor         eax, eax
    xor         ecx, ecx
    jmp         .loop

.restart:
    cmp         al, 0x0
    je          .end
    inc         edi
    xor         ecx, ecx

.loop:
    mov         al, [edi + ecx]
    cmp         byte [esi + ecx], 0x0
    jz          .found
    cmp         al, [esi + ecx]
    jne         .restart
    inc         ecx
    jmp         .loop

.found:
    mov         eax, edi

.end:
    ret
