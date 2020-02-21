bits                64
section             .text
	global          strcmp
	global          _strcmp

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

_strcmp:
strcmp:
    xor         r8, r8
    xor         rcx,rcx

.loop:
    mov         r8b, [rsi + rcx]
    mov         al, [rdi + rcx]
    cmp         r8b, 0x0
    je          .rt_end
    cmp         rax, 0x0
    je          .rt_end
    cmp         al, r8b
    jne         .rt_end
    inc         rcx
    jmp         .loop

.rt_end:
    sub         al, r8b
    movsx       rax, al
    jmp         .end

.end:
    ret

;; .loop:
;;     mov         r8b, [rsi + rcx]
;;     mov         al, [rdi + rcx]
;;     cmp         r8b, 0x0
;;     je          .rt_end
;;     cmp         rax, 0x0
;;     je          .rt_end
;;     cmp         al, r8b
;;     jne         .rt_end
;;     inc         rcx
;;     jmp         .loop

;; .rt_end:
;;     sub         al, r8b
;;     movsx       rax, al
;;     jmp         .end

;; .end:
;;     ret
