/*
** EPITECH PROJECT, 2024
** rush2
** File description:
** rush2_3.c
*/

#include "lib.h"

void my_print_perc1(int count, int len)
{
    float perc = (float)count * 100 / (float)len;
    int percc = (int)(perc * 100);

    my_put_nbr(perc);
    my_putchar('.');
    my_put_nbr(percc % 100);
    my_putstr("%)");
    my_putchar('\n');
}

int search_char1(int count, char **av, int i)
{
    for (char *p = av[1]; *p != '\0'; p++)
        if (my_tolower(*p) == my_tolower(av[i][0]))
            count++;
    return (count);
}

void rush2_3(int ac, char **av)
{
    int count;
    int len = my_strlen_onlyalpha(av[1]);

    my_strtolower(av[1]);
    for (int i = 2; i < ac; i++) {
        count = 0;
        count = search_char1(count, av, i);
        my_putchar(av[i][0]);
        my_putchar(':');
        my_put_nbr(count);
        my_putstr(" (");
        my_print_perc1(count, len);
    }
}
