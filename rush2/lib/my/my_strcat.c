/*
** EPITECH PROJECT, 2024
** CPoolDay07
** File description:
** ./my_strcat.c
*/

#include "lib.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len = my_strlen(dest);

    while (src[i] != '\0') {
        dest[i + len] = src[i];
        i++;
    }
    dest[i + len] = '\0';
    return dest;
}
