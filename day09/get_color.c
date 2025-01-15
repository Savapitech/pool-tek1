/*
** EPITECH PROJECT, 2024
** CPoolDay08
** File description:
** my_show_params_array
*/

#include "my.h"

int get_color(unsigned char r, unsigned char g, unsigned char b)
{
    int c = r;

    c = c << 8;
    c += g;
    c = c << 8;
    c += b;
    return (c);
}
