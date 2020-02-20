	bits                64
	section             .text
	global              memcpy
	global              _memcpy

    ;; void *memcpy(void *dest, const void *src, size_t n);

_memcpy:
memcpy:
    mov         rax, rdi

.loop:
    cmp         rdx, 0x00
    je          .end
    mov         r9b, [rsi]
    mov         [rdi], r9b
    dec         rdx
    inc         rsi
    inc         rdi
    jmp         .loop

.end:
    ret

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
