/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 3
*/

#include "lib.h"

int my_strlen_only_alpha(char const *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (isalpha(str[i]))
            len++;
    return (len);
}
