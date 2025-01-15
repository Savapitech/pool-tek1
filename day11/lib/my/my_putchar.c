/*
** EPITECH PROJECT, 2024
** CPoolDay07
** File description:
** ./my_putchar.c
*/

#include "lib.h"



#include <unistd.h>

void my_putchar(char a)
{
    write(1, &a, 1);
}
