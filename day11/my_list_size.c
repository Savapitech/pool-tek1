/*
** EPITECH PROJECT, 2024
** CPoolDay11
** File description:
** ./my_params_to_list.c
*/

#include "mylist.h"
#include "lib.h"

int my_list_size(linked_list_t *begin)
{
    int i = 0;
    linked_list_t *l = begin;

    if (begin == 0)
        return 0;
    for (; l->next != 0; i++)
        l = l->next;
    return i + 1;
}
