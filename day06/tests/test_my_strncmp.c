/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 2
*/

#include <criterion/criterion.h>
#include "../day06.h"

Test(my_strncmp, compare_n_char_in_str)
{
    char str[] = "Ceci est un exemple";
    char to_find[] = "exemple";
    int result = my_strncmp(str, to_find, 5);

    result = 1;
    cr_assert(result);
}
