section .data
    hello_message db "Hello, Holberton", 0

section .text
    global main

extern printf

main:
    ; Call printf to print the message
    mov rdi, hello_message
    call printf

    ; Exit the program
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall

