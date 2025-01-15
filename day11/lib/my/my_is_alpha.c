/*
** EPITECH PROJECT, 2023
** B-CPE-100-REN-1-1-rush2-sarah.valo
** File description:
** ./rush2-1.c
*/

int my_is_alpha(char str)
{
    if (('A' <= str && str <= 'Z') || ('a' <= str && str <= 'z'))
        return (1);
    else
        return (0);
}
