/*
** EPITECH PROJECT, 2024
** rush.c
** File description:
** .
*/

void bottom(int x)
{
    int val1 = x - 2;

    my_putchar('C');
    while (val1 != 0) {
        my_putchar('B');
        val1--;
    }
    my_putchar('A');
    my_putchar('\n');
}

void midl(int x)
{
    int val1 = x - 2;

    my_putchar('B');
    while (val1 != 0) {
        my_putchar(' ');
        val1--;
    }
    my_putchar('B');
}

void draw1(int y, int x)
{
    while (y != 0) {
        car(x);
        my_putchar('\n');
        y--;
    }
}

void draw2(int y, int x)
{
    top(x);
    while (y - 2 != 0) {
        midl(x);
        my_putchar('\n');
        y--;
    }
    bottom(x);
}
