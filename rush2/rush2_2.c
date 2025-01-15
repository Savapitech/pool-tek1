/*
** EPITECH PROJECT, 2024
** rush2_2
** File description:
** step 2 - counting the number of occurences of several letters
*/
#include "include/lib.h"

void count_occurences(char *str, char c)
{
    int occurences = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (my_tolower(str[i]) == my_tolower(c)){
            occurences++;
        }
    }
    my_putchar(c);
    my_putchar(':');
    my_put_nbr(occurences);
    my_putchar('\n');
}

void display_occurences(int argc, char **str)
{
    for (int j = 2; j < argc; j++) {
        count_occurences(str[1], str[j][0]);
    }
}
