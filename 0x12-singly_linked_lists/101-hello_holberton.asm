    ; ##########################
    ; exporing function hello_world
    ; ##########################
    global main
    ; ##########################
    ; code
    ; ##########################
    section .text
main: 
    ; ##########################
    ; write(1, message, length)
    ; ##########################
    mov  rax, 1              ; system call for write
    mov  rdi, 1              ; making file handle stdout
    mov  rsi, message        ; passing adress of string to output
    mov  rdx, length         ; number of bytes
    syscall                  ; invoking os to write
    ; ##########################
    ; Variables
    ; ##########################
    section .data   
message: db "Hello, Holberton", 0xa ; const char * message = "Hello, Holberton "\n"
length: equ $-message;  int length= len(message) =12; 