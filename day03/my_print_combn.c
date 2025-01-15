/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday03-savinien.petitjean
** File description:
** my_print_combn.c
*/

int my_put_nbr_pad(int n, int d)
{
    int digits = 0;

    for (int copy = n; copy != 0; copy /= 10)
        digits++;
    for (; d > digits && n; d--)
        my_putchar('0');
    my_put_nbr(n);
    return 0;
}

int max_combn(int n)
{
    int max = 0;
    int offset = 10 - n;

    for (int dig = 0; dig < n; dig++)
        max = max * 10 + dig + offset;
    return max;
}

int is_valid_combn(int n, int size)
{
    int ceilx = 10;
    int x;

    for (int i = size; i > 0; i--) {
        x = n % 10;
        if (x >= ceilx)
            return 0;
        ceilx = x;
        n /= 10;
    }
    return 1;
}

int my_print_combn(int n)
{
    int k = 0;

    for (; k < max_combn(n); k++) {
        if (!is_valid_combn(k, n))
            continue;
        my_put_nbr_pad(k, n);
        my_putchar(',');
        my_putchar(' ');
    }
    my_put_nbr_pad(k, n);
    return 0;
}
