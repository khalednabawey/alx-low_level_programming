section .data
    hello db "Hello, Holberton", 0xA, 0

section .text
    global _start

_start:
    ; Call printf function
    mov rdi, hello    ; Load the address of the hello string into rdi (1st argument)
    mov rax, 0        ; Use rax as syscall number 0 (syscall for printf)
    call printf      ; Call the printf function

    ; Exit the program
    mov rax, 60      ; Use rax as syscall number 60 (syscall for exit)
    xor rdi, rdi     ; Return 0 status
    syscall         ; Perform syscall to exit the program

