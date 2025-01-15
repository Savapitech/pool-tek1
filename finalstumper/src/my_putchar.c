/*
** EPITECH PROJECT, 2024
** CPoolDay07
** File description:
** ./my_putchar.c
*/

#include "rush3.h"

int my_putchar(char c)
{
    return (write(1, &c, sizeof(char)) == sizeof(char))
        ? (int)(sizeof(char)) : -84;
}
