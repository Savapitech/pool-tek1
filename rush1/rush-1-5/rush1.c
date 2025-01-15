/*
** EPITECH PROJECT, 2024
** rush.c
** File description:
** .
*/

void car(int x)
{
    while (x != 0) {
        my_putchar('B');
        x--;
    }
}

void top(int x)
{
    int val1 = x - 2;

    my_putchar('A');
    while (val1 != 0) {
        my_putchar('B');
        val1--;
    }
    my_putchar('C');
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }
    if (x == 1 || y == 1)
        draw1(y, x);
    else
        draw2(y, x);
}
