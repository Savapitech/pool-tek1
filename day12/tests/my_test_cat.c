/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 3
*/

#include "lib.h"
#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
}

Test(my_cat, test_cat_out, .init = redirect_all_stdout)
{
    my_cat("../tests/test_file.txt");
    cr_assert_stdout_eq_str("AihdH847reghfh78wd6s4");
}
