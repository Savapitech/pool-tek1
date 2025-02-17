/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 1
*/

#include "day06.h"

int my_str_isprintable(char *str)
{
    if (my_strlen(str) == 0)
        return (1);
    for (char *p = str; *p; p++)
        if (!isprint(*p))
            return (0);
    return (1);
}
