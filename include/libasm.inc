;; Global Header
BITS                64
section             .text

;; Functions declarations
global              strlen:function
global              strchr:function

;; Function for return on condition
;; end:
;;     RET

;; Simple macro with no paramater for return, same behavior as abrove
;; END:
;;        RET

%macro END 0
       RET
%endmacro

RT_NULL:
       mov     rax, 0x00
       RET

;; %macro RT_NULL 0
;;        mov     rax, 0x00
;;        RET
;; %endmacro

;;jrcxz
