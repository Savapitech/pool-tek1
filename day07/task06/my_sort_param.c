/*
** EPITECH PROJECT, 2024
** CPoolDay07
** File description:
** ./task06/my_sort_params.c
*/

#include "lib.h"

int my_strcmp2(char const *s1, char const *s2)
{
    int i = 0;

    for (; s1[i] == s2[i] && s1[i] != '\0'; i++);
    return s1[i] - s2[i];
}

void my_sort_params2(char **argv, int j)
{
    char *temp;

    if (my_strcmp2(argv[j], argv[j + 1]) > 0) {
        temp = argv[j];
        argv[j] = argv[j + 1];
        argv[j + 1] = temp;
    }
}

void my_sort_params(int argc, char *argv[])
{
    for (int i = 0; i < argc - 1; i++)
        for (int j = 0; j < argc - 1 - i; j++)
            my_sort_params2(argv, j);
}

int main(int argc, char *argv[])
{
    my_sort_params(argc, argv);
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}
