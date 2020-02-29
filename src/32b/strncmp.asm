    bits        64
    section     .text
    global      strncmp

%ifdef TESTS
    global      my_strncmp
my_strncmp:
%endif

;-----------------------------------------------------------------------------
; @function     strncmp
; @prototype    int strcmp(const char *s1, const char *s2);
; @brief        Compares only the first (at most) n bytes of s1 and s2.
; @details      It returns an integer less than, equal to, or greater than zero
;               if s1 (or the first n bytes thereof) is found, respectively, to
;               be less than, to match, or be greater than s2.
; @reg[in]      rdi     Address of the first string.
; @reg[in]      rsi     Address of the second string.
; @reg[in]      rdx     Number of byte to compare.
; @reg[out]     rax     Return value.
; @killedregs   rcx, r8, al
;-----------------------------------------------------------------------------


;-----------------------------------------------------------------------------
;                       MACRO(S)
%macro ASSERT 3
    cmp         %1, %2                  ; If first arg == second arg, jump to lab
    je          %3                      ;
%endmacro
;-----------------------------------------------------------------------------

strncmp:
    xor         eax, eax                        ; Function initialisation:
    xor         e8, e8                          ; Reset used parameters (Xoring with itself)
    xor         ecx, ecx                        ;

.loop:
    ASSERT      ecx, edx, .rt_end               ;
    mov         e8b, byte [esi + ecx]
    mov         al, byte [edi + ecx]
    ASSERT      e8, 0x0, .rt_end
    ASSERT      al, 0x0, .rt_end
    cmp         al, r8b
    jne         .rt_end
    inc         ecx
    jmp         .loop

.rt_end:
    sub         al, e8b
    movsx       eax, al
    ret

.rt_null:
    mov         eax, 0x0
    ret
