/*
** EPITECH PROJECT, 2024
** Rush2
** File description:
** This is the main file of the project
*/

#include "rush2.h"
#include "lib.h"

int main(int ac, char **av)
{
    if (ac <= 2) {
        write(2, "Too few arguments\n", 18);
        return (84);
    }
    rush2_4(ac, av);
    return (0);
}
