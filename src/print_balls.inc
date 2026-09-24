%include "../asm_io.inc"

segment .data
balls_msg		db	"Mmmm yummy balls i lick yumyumyum", 0

segment .bss
;
; uninitialized data
;

segment .text
    global  print_balls
print_balls:
	pusha

	mov			eax, balls_msg
	call		print_string

	popa
	ret


