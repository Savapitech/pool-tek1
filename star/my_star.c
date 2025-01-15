/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-star-savinien.petitjean
** File description:
** my_compute_factorial_rec.c
*/

void my_put_nchar(int n, char c)
{
    for (; n; n--)
        my_putchar(c);
}

void my_render(int i, int h, int d)
{
    int st = (d == -1) ? h : 2;
    int en = (d == -1) ? 1 : h + 1;

    for (int i = st; i != en; i += d) {
        my_put_nchar(h - i + 1, ' ');
        my_disp_star(2 * i + 4 * (h - 1) - (h != 1));
    }
}

void my_disp_line(int len)
{
    int st = 2 * len + 1;
    int sp = 2 * (len - 1) - (len > 1) + (len == 1);

    my_put_nchar(st, '*');
    my_put_nchar(sp, ' ');
    my_put_nchar(st, '*');
    my_putchar('\n');
}

void my_disp_star(int sp)
{
    my_putchar('*');
    if (sp > 0) {
        my_put_nchar(sp, ' ');
        my_putchar('*');
    }
    my_putchar('\n');
}

void star(int size)
{
    int i = (3 * size) - (size > 1);

    if (size <= 0)
        return;
    for (int ii = 0; ii < size; ii++) {
        my_put_nchar(i - ii, ' ');
        my_disp_star(2 * (ii - 1) + 1);
    }
    my_disp_line(size);
    my_render(i, size, -1);
    my_put_nchar(size, ' ');
    my_disp_star((4 * size) - 1 - (2 * (size != 1)));
    my_render(i, size, 1);
    my_disp_line(size);
    for (int ii = size - 1; ii >= 0; ii--) {
        my_put_nchar(i - ii, ' ');
        my_disp_star(2 * (ii - 1) + 1);
    }
}
