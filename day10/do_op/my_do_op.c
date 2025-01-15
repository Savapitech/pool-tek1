/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday10-savinien.petitjean
** File description:
** ./do-op/my_do-op.c
*/

#include "lib.h"

int divide_and_modulo(int v1, int v2, int operator)
{
    if (operator == 1) {
        if (v2 == 0) {
            write(2, "Stop: division by zero\n", 23);
            return (84);
        }
        return (my_put_nbr(v1 / v2));
    }
    if (operator == 2) {
        if (v2 == 0) {
            write(2, "Stop: modulo by zero\n", 22);
            return (84);
        }
        return (my_put_nbr(v1 % v2));
    }
    return (1);
}

int do_op(int v1, char operator, int v2)
{
    switch (operator) {
        case '+':
            return my_put_nbr(v1 + v2);
        case '-':
            return my_put_nbr(v1 - v2);
        case '*':
            return my_put_nbr(v1 * v2);
        case '/':
            return (divide_and_modulo(v1, v2, 1));
        case '%':
            return (divide_and_modulo(v1, v2, 2));
        default:
            my_putstr("0\n");
            return (84);
    }
}

int main(int ac, char **av)
{
    int result;

    if (ac <= 3)
        return (84);
    result = do_op(my_getnbr(av[1]), av[2][0], my_getnbr(av[3]));
    if (result != 0)
        return (result);
    my_putchar('\n');
}
