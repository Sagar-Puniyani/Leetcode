section .data
    hello db 'Hello, World!',0

section .text
    global _start

_start:
    ; write the message to stdout
    mov eax, 4          ; syscall: write
    mov ebx, 1          ; file descriptor: stdout
    mov ecx, hello      ; message to write
    mov edx, 13         ; message length
    int 0x80            ; call kernel

    ; exit
    mov eax, 1          ; syscall: exit
    xor ebx, ebx        ; exit code
    int 0x80            ; call kernel 
