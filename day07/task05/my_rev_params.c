/*
** EPITECH PROJECT, 2024
** CPoolDay07
** File description:
** ./task05/my_rev_params.c
*/

int main(int argc, char **argv)
{
    for (int i = argc - 1; i >= 0; i--) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}
