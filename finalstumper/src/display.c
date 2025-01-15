/*
** EPITECH PROJECT, 2024
** display.c
** File description:
** display the result
*/
#include "rush3.h"

static
void display2(dimensions_t *dimensions, int *count_index, int i)
{
    my_putstr("[rush1-");
    my_put_nbr(count_index[i]);
    my_putstr("] ");
    my_put_nbr(dimensions->x);
    my_putstr(" ");
    my_put_nbr(dimensions->y);
    if (count_index[i + 1] != -84 && count_index[i + 1] != 0)
        my_putstr(" || ");
}

void display(dimensions_t *dimensions, int *count_index)
{
    int count = 0;

    for (int i = 0; count_index[i] != -84; i++)
        if (count_index[i] != 0) {
            display2(dimensions, count_index, i);
            count++;
        }
    if (count == 0)
        my_putstr("none");
    my_putchar('\n');
}
