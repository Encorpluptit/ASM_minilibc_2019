;; Global Header
BITS                64
section             .text

;; Functions declarations
global              _strlen:function

;; Function for return on condition
end:
    RET

;; Simple macro with no paramater for return, same behavior as abrove
%macro END 0
       RET
%endmacro

%macro RT_NULL 0
       mov     rax, 0x00
       RET
%endmacro

;;jrcxz
