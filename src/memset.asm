%include "libasm.inc"

    ;; void *memset(void *s, int c, size_t n);

;;  why "src/memset.asm:15: error: symbol `je.loop' undefined"

_memset:
    mov         rax, rdi

loop_memset:
    cmp         rdx, 0x00
    je          END
    mov         [rdi], sil
    dec         rdx
    inc         rdi
    jmp         loop_memset

;; memset:
;;     xor         rcx, rcx
;;     mov         rax, rdi

;; loop_memset:
;;     cmp         rdx, 0x0
;;     je          END
;;     mov         [rdi + rcx], sil
;;     inc         rdi
;;     loop        loop_memset
    ;; jmp         .loop
