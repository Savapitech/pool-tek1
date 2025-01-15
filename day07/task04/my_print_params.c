/*
** EPITECH PROJECT, 2023
** CPoolDay07
** File description:
** ./task04/my_print_params.c
*/

int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}
