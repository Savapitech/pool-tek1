/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday05-savinien.petitjean
** File description:
** my_compute_square_root.c
*/

int my_is_prime(int nb)
{
    if (nb == 2 || nb == 3)
        return (1);
    if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
        return (0);
    for (int i = 5; i * i <= nb; i += 6)
        if (nb % i == 0 || nb % (i + 2) == 0)
            return (0);
    return (1);
}
