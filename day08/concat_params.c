/*
** EPITECH PROJECT, 2024
** CPoolDay08
** File description:
** ./concat_params.c
*/

#include "lib.h"

char *concat_params(int argc, char **argv)
{
    int len = 0;
    char *dest;

    for (int i = 0; i < argc; i++)
        len += my_strlen(argv[i]);
    dest = malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < argc; i++) {
        dest = my_strcat(dest, argv[i]);
        if (i + 1 != argc)
            my_strcat(dest, "\n");
    }
    return (dest);
}
