%include "libasm.inc"
    ;; bits                64

section             .text
    ;; global              strlen:function


strlen:
    xor         rax, rax
    cmp         byte [rdi], 0x0
    je          .end
    jmp         .loop


.loop:
    inc         rax
    inc         rdi
    cmp         byte [rdi], 0x0
    jne         .loop
    jmp         .end
    ;; je          end
    ;; JE	        end
    ;; JMP	.loop

.end:
    RET
