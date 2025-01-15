/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday10-savinien.petitjean
** File description:
** ./my_sort_word_array.c
*/

#include "lib.h"

int my_sort_word_array(char **tab)
{
    int size = my_get_array_size(tab);
    char *str;

    for (int i = 0; i < size; i++) {
        if (my_strcmp(tab[i], tab[i - 1]) < 0) {
            str = tab[i - 1];
            tab[i - 1] = tab[i];
            tab[i] = str0;
            my_sort_word_array(tab);
            break;
        }
    }
    return (0);
}
