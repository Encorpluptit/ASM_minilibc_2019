bits                64
section             .text
    global              strchr
    global              _strchr

;-----------------------------------------------------------------------------
; @function     strchr
; @prototype    char *strchr(const char *s, int c);
; @brief        Returns a pointer to the first occurrence of the character c
;               in the string s.
; @reg[in]      rdi     Address of the memory to search in.
; @reg[in]      sil     Char to find (Least significant byte).
; @reg[out]     rax     Index found.
; @killedregs
;-----------------------------------------------------------------------------

_strchr:
strchr:
    xor         rax, rax

;; .loop:
;;     ;; std                         ; Set the direction flag so copying is right-to-left.
;;     cmp         byte [rdi + rcx], sil
;;     je          .rt
;;     cmp         byte [rdi + rcx], 0x00
;;     je          .rt_null
;;     loop        .loop

.loop:
    cmp         byte [rdi], sil
    je          .rt
    cmp         byte [rdi], 0x00
    je          .rt_null
    inc         rdi
    jmp         .loop

.rt:
    mov         rax, rdi
    jmp         .end

.rt_null:
    mov     rax, 0x0

.end:
    ret
