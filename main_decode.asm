%include "src/print_balls.inc"

segment .data
;
; empty
; 

segment .bss
;
; uninitialized data
;

segment .text
    global  _asm_main
_asm_main:
    enter       0,0
    pusha

    call        print_balls

    popa
    mov         eax, 0
    leave
    ret

