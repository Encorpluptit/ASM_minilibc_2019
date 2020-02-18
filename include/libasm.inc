%ifndef _LIB_ASM_H_
%define _LIB_ASM_H_
;; Global Header
bits                64
section             .text

;; Functions declarations
global              strlen:function
global              strchr:function
global              memset:function
global              memcpy:function

;; Function for return on condition
END:
       RET

;; Simple macro with no paramater for return, same behavior as abrove
;; (don(t work like a fct)
;; %macro END 0
;;        RET
;; %endmacro

;; Simple fct with no paramater for return NULL (or 0)
RT_NULL:
       mov     rax, 0x0
       RET


;;jrcxz

%endif ;;_LIB_ASM_H_
