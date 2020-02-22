    bits        64
    section     .text
    global      strcspn

%ifdef TESTS
    global      my_strcspn
my_strcspn:
%endif

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

strcspn:
    xor         rcx, rcx                ; Set rcx to 0
    jmp         .start                  ; Bypass rcx incrementation
    ;; jrcxz       .start

.loop:
    inc         rcx
.start:
    mov         al, byte [rdi + rcx]    ; Store actual byte from s into al.
    cmp         al, 0x0                 ; If byte == '\0', jump to end label.
    je          .end                    ;
    xor         r9, r9                  ; Reset r9 count for rsi (reject)

.sub_str:
    mov         r8b, byte [rsi + r9]    ; Store actual byte from rsi into r8b.
    cmp         r8b, 0x0                ; If byte == '\0', jump to loop label.
    je          .loop                   ;
    cmp         r8b, al                 ; If rsi byte == rdi byte, jump to end label.
    je          .end                    ;
    inc         r9                      ; Loop on rsi
    jmp         .sub_str                ;

.rt_null:
    mov         rax, 0x0                ; Return NULL;
    ret                                 ;

.end:
    mov         rax, rcx                ; Return index (rcx count)
    ret                                 ;
