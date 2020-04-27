    bits        64
    section     .text
    global      strpbrk

%ifdef TESTS
    global      my_strpbrk
my_strpbrk:
%endif

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

strpbrk:
    jmp         .start                          ; Skip loop incrementation

.loop:
    inc         rdi                             ; Increment s
.start:
    cmp         byte [rdi], 0x0                 ; Compare char from s with \0
    je          .rt_null                        ; If equal, return
    xor         rcx, rcx                        ; Reset rcx

.sub_str:
    mov         r8b, byte [rsi + rcx]           ; Moving char from accept + count into r8b
    cmp         r8b, 0x0                        ; Compare with \0
    je          .loop                           ; If end of accept , restart loop on s + 1
    cmp         r8b, byte [rdi]                 ; Compare char from s with char from accept
    je          .end                            ; If equal, return result
    inc         rcx                             ; Increment count and restart loop on accept
    jmp         .sub_str                        ;

.rt_null:
    mov         rax, 0x0                        ; Return 0
    ret

.end:
    mov         rax, rdi                        ; Return result
    ret
