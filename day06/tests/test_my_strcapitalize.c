/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 2
*/

#include <criterion/criterion.h>
#include "../day06.h"

Test(my_strcapitalize, capitalize_words)
{
    char str[] = "hey, how are you? 42WORds forty-two; fifty+one";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "Hey, How Are You? 42words Forty-Two; Fifty+One");
}

Test(my_strcapitalize1, capitalize_words)
{
    char str[] = "Ceci est un exemple";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "Ceci Est Un Exemple");
}

Test(my_strcapitalize2, capitalize_words)
{
    char str[] = "  test";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "  Test");
}

Test(my_strcapitalize4, capitalize_words)
{
    char str[] = "a";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "A");
}

Test(my_strcapitalize5, capitalize_words)
{
    char str[] = " a ";

    my_strcapitalize(str);
    cr_assert_str_eq(str, " A ");
}
