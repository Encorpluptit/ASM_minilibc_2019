%include "libasm.inc"

    ;; void *memcpy(void *dest, const void *src, size_t n);

_memcpy:
    mov         rax, rdi

loop_memcpy:
    cmp         rdx, 0x00
    je          END
    mov         r9b, [rsi]
    mov         [rdi], r9b
    dec         rdx
    inc         rsi
    inc         rdi
    jmp         loop_memcpy


;; memcpy:
;;     xor         rcx, rcx
;;     mov         rax, rdi

;; .loop:
;;     cmp         rcx, rdx
;;     je          END
;;     mov         r8b, byte [rcx + rsi]
;;     mov         byte [rax, rcx], r8b
;;     inc         rcx
;;     jmp         .loop


;; memcpy:
;;     mov         rax, rdi

;; .loop:
;;     cmp         0x0, rdx
;;     je          END
;;     mov         r8b, byte [rcx + rsi]
;;     mov         byte [rax, rcx], r8b
;;     inc         rcx
;;     jmp         .loop
