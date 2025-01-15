/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 2
*/

#include <criterion/criterion.h>
#include "../day06.h"

Test(my_strupcase, upcase_all_letters)
{
    char str[] = "example";

    my_strupcase(str);
    cr_assert_str_eq("EXAMPLE", "EXAMPLE");
}
