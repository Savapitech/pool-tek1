/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 2
*/

#include <criterion/criterion.h>
#include "../day06.h"

Test(my_str_islower, check_if_str_is_lower)
{
    char str[] = "abc";

    cr_assert(my_str_islower(str));
}
