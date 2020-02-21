bits                64
section             .text
        global              strstr
        global              _strstr

;-----------------------------------------------------------------------------
; @function     strstr
; @prototype    char *strstr(const char *haystack, const char *needle);
; @brief        Finds the first occurrence of the substring needle
;               in the string haystack.
; @details      The terminating null bytes ('\0') are not compared.
; @reg[in]      rdi     Address of the first string.
; @reg[in]      rsi     Address of the second string.
; @reg[out]     rax     Return value.
; @killedregs   rcx, al
;-----------------------------------------------------------------------------

_strstr:
strstr:
    xor         rax, rax
    xor         rcx, rcx
    jmp         .loop

.restart:
    cmp         al, 0x0
    je          .end
    inc         rdi
    xor         rcx, rcx

.loop:
    mov         al, [rdi + rcx]
    cmp         byte [rsi + rcx], 0x0
    jz          .found
    cmp         al, [rsi + rcx]
    jne         .restart
    loop        .loop

.found:
    mov         rax, rdi

.end:
    ret


    ;; Godbolt asm code of strstr implemetation with memcmp
    ;; Usefull to see what i'm missing in ASM langage

;; strstr:
;; _strstr:
;;         push    rbp
;;         mov     rbp, rsp
;;         sub     rsp, 32
;;         mov     QWORD [rbp-24], rdi
;;         mov     QWORD [rbp-32], rsi
;;         mov     rax, QWORD [rbp-24]
;;         mov     QWORD [rbp-8], rax
;;         mov     rax, QWORD [rbp-32]
;;         mov     rdi, rax
;;         call    strlen
;;         mov     QWORD [rbp-16], rax
;; .L5:
;;         mov     rax, QWORD [rbp-32]
;;         movzx   eax, BYTE [rax]
;;         movsx   edx, al
;;         mov     rax, QWORD [rbp-8]
;;         mov     esi, edx
;;         mov     rdi, rax
;;         call    strchr
;;         mov     QWORD [rbp-8], rax
;;         cmp     QWORD [rbp-8], 0
;;         setne   al
;;         test    al, al
;;         je      .L2
;;         mov     rdx, QWORD[rbp-16]
;;         mov     rcx, QWORD [rbp-32]
;;         mov     rax, QWORD [rbp-8]
;;         mov     rsi, rcx
;;         mov     rdi, rax
;;         call    strncmp
;;         test    eax, eax
;;         jne     .L3
;;         mov     rax, QWORD [rbp-8]
;;         jmp     .L4
;; .L3:
;;         add     QWORD [rbp-8], 1
;;         jmp     .L5
;; .L2:
;;         mov     eax, 0
;; .L4:
;;         leave
;;         ret
