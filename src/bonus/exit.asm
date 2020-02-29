    bits        64
    section     .text
    global      exit:function

exit:
    mov rax, 60
    syscall
    ret
