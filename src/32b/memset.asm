    bits        32
    section     .text
    global      memset

%ifdef TESTS
    global      my_memset
my_memset:
%endif

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

memset:
    mov         e8, edi         ; Preserve the original destination address to return.

    mov         eax, esi        ; The value to store is the second parameter (rsi).
    mov         ecx, edx        ; Do a byte-by-byte store.
    rep         stosb           ;

    mov         eax, e8         ; Return the original destination address.
    ret                         ;
