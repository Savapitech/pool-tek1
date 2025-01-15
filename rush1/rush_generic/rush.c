/*
** EPITECH PROJECT, 2024
** rush1
** File description:
** rush-1-3
*/

void draw_bottom(int x, int y, char *format)
{
    if (x > 1) {
        my_putchar(format[4]);
        for (int i = 0; i < x - 2; i++)
            my_putchar(format[5]);
        my_putchar(format[6]);
        my_putchar('\n');
    } else {
        my_putchar(format[5]);
        my_putchar('\n');
    }
}

void draw_rl2(int x, char *format)
{
    my_putchar(format[3]);
    for (int i = 0; i < x - 2; i++)
        my_putchar(' ');
}

void draw_rl(int x, int y, char *format)
{
    for (int i = 0; i < y - 2; i++) {
        if (x > 1)
            draw_rl2(x, format);
        my_putchar(format[3]);
        my_putchar('\n');
    }
}

void rush(int x, int y, char *format)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }
    if (!x || !y)
        return;
    if (x == 1 && y == 1) {
        my_putchar(format[0]);
        my_putchar('\n');
        return;
    }
    draw_top(x, y, format);
    if (y > 1) {
        draw_rl(x, y, format);
        draw_bottom(x, y, format);
    }
}
