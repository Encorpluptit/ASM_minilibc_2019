    bits        64
    section     .text
    global      openat

openat:
    mov         rax, 257
    syscall
    ret
