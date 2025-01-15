/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 2
*/

#include <criterion/criterion.h>
#include "../day06.h"

Test(my_strcpy, copy_characters_in_empty_array)
{
    char my_dest[6] = {0};
    char dest[6] = {0};

    my_strcpy(my_dest, "Hello");
    strcpy(dest, "Hello");
    cr_assert_str_eq(my_dest, dest);
}
