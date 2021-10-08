global main

section .text

main:
mov rax, 1
mov rdi, 1
mov rsi, msg
mov rdx, msglen
syscall

mov rax, 60
mov rdi, 0
syscall

section .rodata
msg: db "Hello, Holberton", 10
msglen: eq $ - msg
