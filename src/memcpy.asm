    bits        64
    section     .text
    global      memcpy

%ifdef TESTS
    global      my_memcpy
my_memcpy:
%endif

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

memcpy:
    mov         rax, rdi        ; Preserve destination address to return it.

    mov         rcx, rdx
    rep         movsb           ; Do a byte-by-byte move until rcx == 0.
    ret
