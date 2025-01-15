/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 2
*/

#include <criterion/criterion.h>
#include "../day06.h"

Test(my_strlowcase, capitalize_str)
{
    char str[] = "HELLO";

    my_strlowcase(str);
    cr_assert_str_eq(str, "hello");
}
