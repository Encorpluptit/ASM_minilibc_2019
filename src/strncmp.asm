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

%macro ASSERT 3
    cmp         %1, %2
    je          %3
%endmacro

strncmp:
    xor         rax, rax
    xor         r8, r8
    xor         rcx,rcx

.loop:
    ASSERT      rcx, rdx, .rt_null
    mov         r8b, byte [rsi + rcx]
    mov         al, byte [rdi + rcx]
    ASSERT      r8, 0x0, .rt_end
    ASSERT      al, 0x0, .rt_end
    cmp         al, r8b
    jne         .rt_end
    loop        .loop

;; .loop:
;;     cmp         rcx, rdx
;;     je          .rt_null
;;     mov         r8b, byte [rsi + rcx]
;;     mov         al, byte [rdi + rcx]
;;     cmp         r8, 0x0
;;     je          .rt_end
;;     cmp         al, 0x0
;;     je          .rt_end
;;     cmp         al, r8b
;;     jne         .rt_end
;;     loop        .loop

.rt_end:
    sub         al, r8b
    movsx       rax, al
    jmp         .end

.rt_null:
    mov     rax, 0x0
    ret

.end:
    ret
