bits                64
section             .text
	global              memcpy
	global              _memcpy

;-----------------------------------------------------------------------------
; @function     memcpy
; @prototype    void *memcpy(void *dest, const void *src, size_t n);
; @brief        Copy bytes from one memory region to another.
; @details      If the memory regions overlap, this function's behavior
;               is undefined, and you should use memmove instead.
; @reg[in]      rdi     Address of the destination memory area.
; @reg[in]      rsi     Address of the source memory area.
; @reg[in]      rdx     Number of bytes to copy.
; @reg[out]     rax     Destination address.
; @killedregs   rcx
;-----------------------------------------------------------------------------

_memcpy:
memcpy:
    ; Preserve destination address because we have to return it.
    mov         rax, rdi

    mov         rcx, rdx
    rep         movsb
    ret
