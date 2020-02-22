bits            64
section         .text

    global      strcspn
    global      _strcspn


;-----------------------------------------------------------------------------
; @function     strcspn
; @prototype    size_t strcspn(const char *s, const char *reject);;
; @brief        calculates the length of the initial segment of s
;               which consists entirely of bytes not in reject.
; @return       Number of bytes in the initial segment of s which
;               are not in the string reject.
; @reg[in]      rdi     Address of source memory to search in (s).
; @reg[in]      rsi     Address of prefix memory (reject).
; @reg[out]     rax     First bytes found or NULL.
; @killedregs   rcx, r8
;-----------------------------------------------------------------------------

_strcspn:
strcspn:
    xor         rcx, rcx
    jmp         .start

.loop:
    inc         rcx
.start:
    mov         al, byte [rdi + rcx]
    cmp         al, 0x0
    je          .end
    ;; je          .rt_null
    xor         r9, r9

.sub_str:
    mov         r8b, byte [rsi + r9]
    cmp         r8b, 0x0
    je          .loop
    cmp         r8b, al
    je          .end
    inc         r9
    jmp         .sub_str

.rt_null:
    mov         rax, 0x0
    ret

.end:
    mov         rax, rcx
    ret
