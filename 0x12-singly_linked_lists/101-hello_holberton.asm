; Filename: 101-hello_holberton.asm
; Author: OLULETI VICTOR

global _start

section .text

_start:
	;write Hello holberton to screen
	mov rax, 0x1 ;syscall for write
	mov rdi, 0x1 ;fd for stdout
	mov rsi, message
	mov rdx, msglen
	syscall

	;exit
	mov rax, 0x3c
	mov rdi, 0x2
	syscall
section .data
	message: db "Hello, Holberton", 0xA
	msglen equ $-message
