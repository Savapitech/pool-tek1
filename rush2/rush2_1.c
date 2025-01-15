/*
** EPITECH PROJECT, 2024
** rush2
** File description:
** rush2_1.c
*/

#include "lib.h"

void rush2_1(char **av)
{
    int count = 0;

    for (char *p = av[1]; *p != '\0'; p++)
        if (my_tolower(*p) == my_tolower(av[2][0]))
            count++;
    my_putchar(av[2][0]);
    my_putchar(':');
    my_put_nbr(count);
    my_putchar('\n');
}
