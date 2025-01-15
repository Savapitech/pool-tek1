/*
** EPITECH PROJECT, 2024
** CPoolDay08
** File description:
** my_show_params_array
*/

#include "lib.h"

int my_show_param_array(struct info_param const *par)
{
    for (int i = 0; par[i].str != 0; i++) {
        my_putstr(par[i].str);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        my_show_word_array(par[i].word_array);
    }
    return (0);
}
