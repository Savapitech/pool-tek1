/*
** EPITECH PROJECT, 2024
** CPoolDay08
** File description:
** ./my_params_to_array.c
*/

#include "lib.h"

struct info_param *my_params_to_array(int argc, char **argv)
{
    int i = 0;
    struct info_param *my_params;

    my_params = malloc(sizeof(struct info_param) * (argc + 1));
    for (; i < argc; i++) {
        my_params[i].length = my_strlen(argv[i]);
        my_params[i].str = argv[i];
        my_params[i].copy = my_strdup(argv[i]);
        my_params[i].word_array = my_str_to_word_array(argv[i]);
    }
    my_params[i].str = 0;
    return my_params;
}
