/*
** EPITECH PROJECT, 2024
** CPoolDay07
** File description:
** ./my_strncat.c
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int len = my_strlen(dest);

    for (; src[i] != '\0' && i < nb; i++)
        dest[i + len] = src[i];
    dest[i + len] = '\0';
    return dest;
}
