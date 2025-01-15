/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday04-savinien.petitjean
** File description:
** my_evil_str.c
*/

char *my_evil_str(char *str)
{
    int len = my_strlen(str);
    char copy;

    for (int i = 0; i < len / 2; i++) {
        copy = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = copy;
    }
    return (str);
}
