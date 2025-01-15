/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday05-savinien.petitjean
** File description:
** my_compute_factorial_it.c
*/

int my_compute_factorial_it(int nb)
{
    int r = 1;

    if (nb == 0)
        return (1);
    else if (nb > 12)
        return (0);
    if (nb <= 0)
        return (0);
    for (int i = 1; i <= nb; i++)
        r = r * i;
    return (r);
}
