/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday05-savinien.petitjean
** File description:
** my_compute_factorial_rec.c
*/

int my_compute_factorial_rec(int nb)
{
    if (nb > 12)
        return (0);
    if (nb == 0)
        return 1;
    else if (nb <= 0)
        return 0;
    else
        return nb * my_compute_factorial_rec(nb - 1);
}
