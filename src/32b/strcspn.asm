    bits        32
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
    xor         ecx, ecx                ; Set rcx to 0
    jmp         .start                  ; Bypass rcx incrementation
    ;; jrcxz       .start

.loop:
    inc         ecx
.start:
    mov         al, byte [edi + ecx]    ; Store actual byte from s into al.
    cmp         al, 0x0                 ; If byte == '\0', jump to end label.
    je          .end                    ;
    xor         e9, e9                  ; Reset r9 count for rsi (reject)

.sub_str:
    mov         e8b, byte [esi + r9]    ; Store actual byte from rsi into r8b.
    cmp         e8b, 0x0                ; If byte == '\0', jump to loop label.
    je          .loop                   ;
    cmp         e8b, al                 ; If rsi byte == rdi byte, jump to end label.
    je          .end                    ;
    inc         e9                      ; Loop on rsi
    jmp         .sub_str                ;

.rt_null:
    mov         eax, 0x0                ; Return NULL;
    ret                                 ;

.end:
    mov         eax, ecx                ; Return index (rcx count)
    ret                                 ;
