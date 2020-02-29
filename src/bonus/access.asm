    bits        64
    section     .text
    global      access

access:
    mov         rax, 21
    syscall
    ret
