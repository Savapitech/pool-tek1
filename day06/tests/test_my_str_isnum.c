/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 2
*/

#include <criterion/criterion.h>
#include "../day06.h"

Test(my_str_isnum, check_if_str_is_digit)
{
    char str[] = "5678";

    cr_assert(my_str_isnum(str));
}
