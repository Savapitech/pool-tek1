/*
** EPITECH PROJECT, 2024
** parser
** File description:
** parser.c
*/

#include <stdio.h>
#include "rush3.h"

static
const char *ASSIGNEMENTS[] = {
    "oo-|#oo-|",
    "/\\**#\\/**",
    "AABB#CCBB",
    "ACBB#ACBB",
    "ACBB#CABB",
    NULL
};

static
void count_size(dimensions_t *dimensions)
{
    int x;
    int y;

    for (int i = 0; dimensions->buff[i] != '\0'; i++)
        if (dimensions->buff[i] == '\n')
            y++;
    for (int a = 0; dimensions->buff[a] != '\n'; a++)
        x++;
    dimensions->x = x;
    dimensions->y = y;
}

static
int checker2(dimensions_t *dimensions)
{
    for (int i = 0; ASSIGNEMENTS[i] != NULL; i++)
        if (!compare_formats(dimensions->format, ASSIGNEMENTS[i]))
            return (i + 1);
    return (0);
}

static
void checker3(dimensions_t *dimensions, int *count_index)
{
    for (int i = 0; ASSIGNEMENTS[i] != NULL; i++)
        if (dimensions->format[2] == ASSIGNEMENTS[i][2] &&
            dimensions->format[3] == ASSIGNEMENTS[i][3])
            count_index[i] = i + 1;
}

static
void checker(dimensions_t *dimensions)
{
    int count_index[6] = { 0 };

    count_index[5] = -84;
    if (dimensions->x >= 2 && dimensions->y >= 2)
        count_index[0] = checker2(dimensions);
    if (dimensions->x == 1 && dimensions->y == 1 &&
        dimensions->format[0] == 'o')
        count_index[0] = 1;
    if ((dimensions->x == 1 || dimensions->y == 1) &&
        dimensions->format[0] == 'o')
        count_index[0] = 1;
    if (dimensions->x == 1 || dimensions->y == 1)
        checker3(dimensions, count_index);
    display(dimensions, count_index);
}

int parser(char *str)
{
    dimensions_t dimensions;
    char format[10] = "????#????";

    dimensions.buff = str;
    count_size(&dimensions);
    dimensions.format = gen_format(&dimensions, format);
    checker(&dimensions);
    return (0);
}
