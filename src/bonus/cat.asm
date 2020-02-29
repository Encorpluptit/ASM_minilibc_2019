
%define SYS_EXIT 60
%define SYS_READ 0
%define SYS_WRITE 1
%define SYS_OPEN 2
%define SYS_CLOSE 3
%define STDOUT 1

%define BUFFER_SIZE 2048

    bits        64
    global      cat
    section     .text
cat:
    add         rsp, byte 10h           ; Récupère le premier argument
    pop         rdi                     ;

    mov         rax, SYS_OPEN           ; Ouvre le fichier
    mov         rsi, 0                  ;
    syscall                             ;
    mov         [fd], rax               ;


.read_write:
    mov         rax, SYS_READ           ; Lit le fichier dans un buffer
    mov         rdi, [fd]               ;
    mov         rsi, file_buffer        ;
    mov         rdx, BUFFER_SIZE        ;
    syscall                             ;

    cmp         rax, 0                  ; Si on a atteint la fin du fichier, on quitte
    je          .exit                   ;

    mov         rdx, rax                ; Affiche le contenu du buffer
    mov         rax, SYS_WRITE          ;
    mov         rdi, STDOUT             ;
    mov         rsi, file_buffer        ;
    syscall                             ;

    jp          .read_write             ;


.exit:
  ; Ferme le fichier
    mov         rax, SYS_CLOSE
    mov         rdi, fd
    syscall

  ; Ajoute un retour à la ligne
    mov         [file_buffer], dword 10
    mov         rax, SYS_WRITE
    mov         rdi, STDOUT
    mov         rsi, file_buffer
    mov         rdx, 1
    syscall

  ; Quitte
    mov         rax, 60
    mov         rdi, 0
    syscall
    ret


section     .data
fd dw 0

section     .bss
file_buffer resb BUFFER_SIZE
