bits            64
section         .text

    global      strpbrk
    global      _strpbrk


;-----------------------------------------------------------------------------
; @function     strpbrk
; @prototype    char *strpbrk(const char *s, const char *accept);
; @brief        Locates the first occurrence in the string s of any of
;               the bytes in the string accept.
; @return       Pointer to the byte in s that matches one of the bytes
;               in accept, or NULL if no such byte is found.
; @reg[in]      rdi     Address of source memory to search in (s).
; @reg[in]      rsi     Address of byte memory to find (accept).
; @reg[out]     rax     First bytes found or NULL.
; @killedregs   rcx, r8
;-----------------------------------------------------------------------------

_strpbrk:
strpbrk:
    jmp         .start

.loop:
    inc         rdi
.start:
    cmp         byte [rdi], 0x0
    je          .rt_null
    xor         rcx, rcx

.sub_str:
    mov         r8b, byte [rsi + rcx]
    cmp         r8b, 0x0
    je          .loop
    cmp         r8b, byte [rdi]
    je          .end
    inc         rcx
    jmp         .sub_str

.rt_null:
    mov         rax, 0x0
    ret

.end:
    mov         rax, rdi
    ret

;; _strpbrk:
;; strpbrk:
;;     xor         rcx, rcx
;;     jmp         .start

;; .loop:
;;     inc         rdi
;; .start:
;;     cmp         byte [rdi], 0x0
;;     je          .rt_null
;;     xor         r9, r9

;; .sub_str:
;;     mov         r8b, byte [rsi + r9]
;;     cmp         r8b, 0x0
;;     je          .loop
;;     cmp         r8b, byte [rdi]
;;     je          .end
;;     inc         r9
;;     jmp         .sub_str

;; .rt_null:
;;     mov         rax, 0x0
;;     ret

;; .end:
;;     mov         rax, rdi
;;     ret

;; _strpbrk:
;; strpbrk:
;;     xor         rcx, rcx

;; .loop:
;;     add         rdi, rcx
;;     cmp         byte [rdi], 0x0
;;     je          .rt_null
;;     xor         r9, r9

;; .sub_str:
;;     mov         r8b, byte [rsi + r9]
;;     cmp         r8b, 0x0
;;     loop        .loop
;;     cmp         r8b, byte [rdi]
;;     je          .end
;;     inc         r9
;;     jmp         .sub_str

;; .rt_null:
;;     mov         rax, 0x0
;;     ret

;; .end:
;;     mov         rax, rdi
;;     ret
