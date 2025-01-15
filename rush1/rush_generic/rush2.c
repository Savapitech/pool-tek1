/*
** EPITECH PROJECT, 2024
** rush1
** File description:
** rush-1-3-2
*/

void draw_top2(int x, int y, char *format)
{
    for (int i = 0; i < x; i++)
        my_putchar(format[1]);
    my_putchar('\n');
}

void draw_top(int x, int y, char *format)
{
    if (x > 1 && y > 1) {
        my_putchar(format[0]);
        for (int i = 0; i < x - 2; i++)
            my_putchar(format[1]);
        my_putchar(format[2]);
        my_putchar('\n');
    } else if (x > 1)
        draw_top2(x, y, format);
    else {
        my_putchar(format[1]);
        my_putchar('\n');
    }
}
