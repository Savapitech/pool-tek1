/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday03-savinien.petitjean
** File description:
** my_print_comb.c
*/

int my_putstr(char const *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
}
