section .data
    message db 'Bon anniversaire monsieur le directeur', 0

section .text
    global _start

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, message
    mov rdx, 38
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall
