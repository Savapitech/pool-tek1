/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 2
*/

#include <criterion/criterion.h>
#include "../day06.h"

Test(my_str_isprintable, check_if_str_is_printable)
{
    char str[] = "ABC";

    cr_assert(my_str_isprintable(str));
}
