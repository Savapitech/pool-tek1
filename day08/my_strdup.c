/*
** EPITECH PROJECT, 2024
** CPoolDay08
** File description:
** ./my_strdup.c
*/

#include "lib.h"

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));

    return my_strcpy(dest, src);
}
