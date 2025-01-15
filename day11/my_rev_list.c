/*
** EPITECH PROJECT, 2024
** CPoolDay11
** File description:
** ./my_rev_to_list.c
*/

#include "mylist.h"
#include "lib.h"

int write_node(linked_list_t *list, int index, void *new_data)
{
    linked_list_t *element = list;

    for (int i = 0; i < my_list_size(list); i++) {
        if (i == index) {
            element->data = new_data;
            return 1;
        }
        element = element->next;
    }
    return 0;
}

char *read_node(linked_list_t *list, int index)
{
    linked_list_t *element = list;

    for (int i = 0; i < my_list_size(list); i++) {
        if (i == index)
            return element->data;
        element = element->next;
    }
    return 0;
}

void my_rev_list(linked_list_t **begin)
{
    int size = my_list_size(*begin);
    char *c1;
    char *c2;

    for (int i = 0; i < (size / 2); i++) {
        *c2 = read_node(*begin, size - i - 1);
        *c1 = read_node(*begin, i);
        write_node(*begin, i, c2);
        write_node(*begin, size - i - 1, c1);
    }
}
