bits                64
section             .text
        global              strstr
        global              _strstr

    ;; char *strstr(const char *haystack, const char *needle);


_strstr:
strstr:
	push rbp
	mov rbp, rsp

	jmp reset_count
start:
	cmp al, 0
	je fail
	inc rdi

reset_count:
	mov al, [rdi]
	mov al, [rsi]
	xor rcx, rcx

loop:
	mov al, [rdi + rcx]
	mov r8b, [rsi + rcx]
	cmp r8b, 0
	jz win
	cmp al, r8b
	jne start
	inc rcx
	jmp loop

win:
	mov rax, rdi
	jmp end

fail:
	xor rax, rax

end:
	mov rsp, rbp
	pop rbp

	ret

;; strstr:
;; _strstr:
;;         push    rbp
;;         mov     rbp, rsp
;;         sub     rsp, 32
;;         mov     QWORD [rbp-24], rdi
;;         mov     QWORD [rbp-32], rsi
;;         mov     rax, QWORD [rbp-24]
;;         mov     QWORD [rbp-8], rax
;;         mov     rax, QWORD [rbp-32]
;;         mov     rdi, rax
;;         call    strlen
;;         mov     QWORD [rbp-16], rax
;; .L5:
;;         mov     rax, QWORD [rbp-32]
;;         movzx   eax, BYTE [rax]
;;         movsx   edx, al
;;         mov     rax, QWORD [rbp-8]
;;         mov     esi, edx
;;         mov     rdi, rax
;;         call    strchr
;;         mov     QWORD [rbp-8], rax
;;         cmp     QWORD [rbp-8], 0
;;         setne   al
;;         test    al, al
;;         je      .L2
;;         mov     rdx, QWORD[rbp-16]
;;         mov     rcx, QWORD [rbp-32]
;;         mov     rax, QWORD [rbp-8]
;;         mov     rsi, rcx
;;         mov     rdi, rax
;;         call    strncmp
;;         test    eax, eax
;;         jne     .L3
;;         mov     rax, QWORD [rbp-8]
;;         jmp     .L4
;; .L3:
;;         add     QWORD [rbp-8], 1
;;         jmp     .L5
;; .L2:
;;         mov     eax, 0
;; .L4:
;;         leave
;;         ret
