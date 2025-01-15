/*
** EPITECH PROJECT, 2024
** day6
** File description:
** day06.h
*/

#ifndef MYLIST_H_
    #define MYLIST_H_
typedef struct linked_list {
    void *data;
    struct linked_list * next;
} linked_list_t;
int my_list_size(linked_list_t *);
linked_list_t *my_params_to_list(int, char **);
#endif
