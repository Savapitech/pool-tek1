/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday03-savinien.petitjean
** File description:
** my_print_comb2.c
*/

void my_print_nbr2(int n)
{
    my_putchar(n / 10 + 48);
    my_putchar(n % 10 + 48);
}

int my_print_comb2(void)
{
    int a = 1;
    int b = 0;

    while (b <= 98) {
        my_print_nbr2(b);
        my_putchar(' ');
        my_print_nbr2(a);
        if (b < 98) {
            my_putchar(',');
            my_putchar(' ');
        }
        a++;
        if (a > 99) {
            b++;
            a = b + 1;
        }
    }
    return (0);
}
