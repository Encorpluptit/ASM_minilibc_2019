bits                64
section             .text
	global              memset
	global              _memset

;-----------------------------------------------------------------------------
; @function     memset
; @prototype    void *memset(void *s, int c, size_t n);
; @brief        Fill a region of memory with a single byte value.
; @reg[in]      rdi     Address of the destination memory area.
; @reg[in]      rsi     Value of the byte used to fill memory.
; @reg[in]      rdx     Number of bytes to set.
; @reg[out]     rax     Destination address.
; @killedregs   r8, rcx
;-----------------------------------------------------------------------------

_memset:
memset:
    mov         r8, rdi         ; Preserve the original destination address.

    mov         rax, rsi        ; The value to store is the second parameter (rsi).
    mov         rcx, rdx        ; Do a byte-by-byte store.
    rep         stosb

    mov         rax, r8         ; Return the original destination address.
    ret
