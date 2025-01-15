/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday05-savinien.petitjean
** File description:
** my_compute_square_root.c
*/


int my_find_prime_sup(int n)
{
    for (int i = n; i < 2147483647; i++)
        if (my_is_prime(i) == 1)
            return i;
    return 0;
}
