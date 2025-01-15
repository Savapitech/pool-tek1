/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday05-savinien.petitjean
** File description:
** my_compute_square_root.c
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    int result = 0;
    int a;

    for (; result < nb; i++) {
        a = 2 * i - 1;
        result += a;
    }
    i--;
    if (my_compute_power_it(i, 2) != nb)
        i = 0;
    return (i);
}
