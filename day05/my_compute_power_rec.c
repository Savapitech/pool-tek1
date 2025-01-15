/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday05-savinien.petitjean
** File description:
** my_compute_power_rec.c
*/

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    else if (p == 0)
        return 1;
    else
        return nb * my_compute_power_rec(nb, p - 1);
}
