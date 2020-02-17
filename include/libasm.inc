%ifndef _LIB_ASM_H_
%define _LIB_ASM_H_
;; Global Header
bits                64
section             .text

;; Functions declarations
global              strlen:function
global              strchr:function
;; global              _memset:function
;; global              _memcpy:function

;; Function for return on condition
;; END:
;;        RET

;; Simple macro with no paramater for return, same behavior as abrove
%macro END 0
       RET
%endmacro

;; Simple fct with no paramater for return NULL (or 0)
RT_NULL:
       mov     rax, 0x0
       RET

;; Simple macro with no paramater for return NULL (or 0) (causes problems)
;; %macro RT_NULL 0
;;        mov     rax, 0x0
;;        RET
;; %endmacro

;;jrcxz

%endif ;;_LIB_ASM_H_
