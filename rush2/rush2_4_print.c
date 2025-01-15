/*
** EPITECH PROJECT, 2024
** rush2
** File description:
** step4
*/

#include "lib.h"

void display_language(int i)
{
    switch (i) {
        case 0:
            my_putstr("=> English");
        break;
        case 1:
            my_putstr("=> French");
        break;
        case 2:
            my_putstr("=> German");
        break;
        case 3:
            my_putstr("=> Spanish");
        break;
    }
}

int my_tolower(int i)
{
    if (!(i >= 65 && i <= 90) && !(i >= 97 && i <= 122)) {
        return i;
    }
    if (i >= 97 && i <= 122) {
        return i;
    }
    i += 32;
    return i;
}

char *my_strtolower(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = my_tolower(str[i]);
    }
    return str;
}

int my_strlen_onlyalpha(char const *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
            len++;
    return (len);
}
