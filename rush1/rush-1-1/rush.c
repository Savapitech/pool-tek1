/*
** EPITECH PROJECT, 2024
** rush1
** File description:
** rush-1-1
*/

void draw_top(int x, int y)
{
    if (x > 1) {
        my_putchar('o');
        for (int i = 0; i < x - 2; i++)
            my_putchar('-');
    }
    my_putchar('o');
    my_putchar('\n');
}

void draw_rl2(int x)
{
    my_putchar('|');
    for (int i = 0; i < x - 2; i++)
        my_putchar(' ');
}

void draw_rl(int x, int y)
{
    for (int i = 0; i < y - 2; i++) {
        if (x > 1)
            draw_rl2(x);
        my_putchar('|');
        my_putchar('\n');
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }
    if (!x || !y)
        return;
    if (x == 1 && y == 1) {
        my_putchar('o');
        my_putchar('\n');
        return;
    }
    draw_top(x, y);
    if (y > 1) {
        draw_rl(x, y);
        draw_top(x, y);
    }
}
