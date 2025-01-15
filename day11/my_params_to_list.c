/*
** EPITECH PROJECT, 2024
** CPoolDay11
** File description:
** ./my_params_to_list.c
*/

#include "mylist.h"
#include "lib.h"

linked_list_t *my_params_to_list(int argc, char **argv)
{
    linked_list_t *my_linked_list;

    if (argc == 0)
        return 0;
    else {
        my_linked_list = malloc(sizeof(*my_linked_list));
        my_linked_list->data = (void *)argv[argc - 1];
        my_linked_list->next = my_params_to_list(argc - 1, argv);
    }
    return my_linked_list;
}
