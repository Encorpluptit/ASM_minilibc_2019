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
    xor         rax, rax                        ; Function initialisation:
    xor         r8, r8                          ; Reset used parameters (Xoring with itself)
    xor         rcx,rcx                         ;

.loop:
    ASSERT      rcx, rdx, .rt_end               ; if index == n, return al - r8b
    mov         r8b, byte [rsi + rcx]           ; Moving char from s2 to r8b
    mov         al, byte [rdi + rcx]            ; Moving cher from s1 to al
    ASSERT      r8, 0x0, .rt_end                ; Assert not end of s1 or s2
    ASSERT      al, 0x0, .rt_end                ;
    cmp         al, r8b                         ; Compare Chars from s1 and s2
    jne         .rt_end                         ; If different, return al - r8b
    inc         rcx                             ; Increment counter and restart loop
    jmp         .loop

.rt_end:
    sub         al, r8b                         ; Subtract r8b from al
    movsx       rax, al                         ; Move al into rax for Return
    ret

.rt_null:
    mov     rax, 0x0                            ; return 0 (Useless with label rt_end ?)
    ret
