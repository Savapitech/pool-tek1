/*
** EPITECH PROJECT, 2024
** CPoolDay07
** File description:
** ./my_strcat.c
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len = my_strlen(dest);

    for (; src[i] != '\0'; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return dest;
}
