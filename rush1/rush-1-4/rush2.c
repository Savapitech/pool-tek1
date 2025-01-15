/*
** EPITECH PROJECT, 2024
** rush1
** File description:
** rush-1-4-2
*/

void draw_top2(int x, int y)
{
    for (int i = 0; i < x; i++)
        my_putchar('B');
    my_putchar('\n');
}

void draw_top(int x, int y)
{
    if (x > 1 && y > 1) {
        my_putchar('A');
        for (int i = 0; i < x - 2; i++)
            my_putchar('B');
        my_putchar('C');
        my_putchar('\n');
    } else if (x > 1)
        draw_top2(x, y);
    else {
        my_putchar('B');
        my_putchar('\n');
    }
}
