/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday04-savinien.petitjean
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}
