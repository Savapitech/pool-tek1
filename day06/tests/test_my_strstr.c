/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 2
*/

#include <criterion/criterion.h>
#include "../day06.h"

Test(my_strstr, find_existing_substring)
{
    char str[] = "Ceci est un exemple";
    char to_find[] = "exemple";
    char *result = my_strstr(str, to_find);

    cr_assert_not_null(result);
    cr_assert(1);
}

Test(my_strstr2, find_existing_substring)
{
    char str[] = " ";
    char to_find[] = "exemple";
    char *result = my_strstr(str, to_find);

    cr_assert(1);
}

Test(my_strstr3, find_existing_substring)
{
    char str[] = {0};
    char to_find[] = "exemple";
    char *result = my_strstr(str, to_find);

    cr_assert(1);
}

Test(my_strstr4, find_existing_substring)
{
    char str[] = "A";
    char to_find[] = "exemple";
    char *result = my_strstr(str, to_find);

    cr_assert(1);
}

Test(my_strstr5, find_existing_substring)
{
    char str[] = " a ";
    char to_find[] = "exemple";
    char *result = my_strstr(str, to_find);

    cr_assert(1);
}
