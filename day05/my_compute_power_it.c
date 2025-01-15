/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday05-savinien.petitjean
** File description:
** my_compute_power_it.c
*/

int my_compute_power_it(int nb, int p)
{
    int r = 1;

    if (p < 0)
        return (0);
    else if (p == 0)
        return (1);
    for (int i = 1; i <= p; i++)
        r *= nb;
    return r;
}
