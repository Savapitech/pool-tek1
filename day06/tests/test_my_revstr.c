/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 2
*/

#include <criterion/criterion.h>
#include "../day06.h"

Test(my_revstr, test_my_revstr)
{
    char str[] = "Hello";

    my_revstr(str);
    cr_assert_str_eq(str, "olleH");
}
