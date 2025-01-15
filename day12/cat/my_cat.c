/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday06-savinien.petitjean
** File description:
** Task 3
*/

#include "lib.h"
#include <fcntl.h>
#include <stdio.h>

static
int my_cat(char const *file)
{
    int fd;
    char buffer[32];
    int size = 32;

    fd = open(file, O_RDONLY);
    if (fd == -1) {
        write(2, "cat: ", 5);
        my_putstr(file);
        write(2, ": No such file or directory\n", 28);
        return (84);
    }
    while (size == 32) {
        size = read(fd, buffer, 32);
        write(1, buffer, size);
    }
    close(fd);
    return (0);
}

static
int my_cat_noargs(void)
{
    char buffer[32];
    int size = 0;

    while (1) {
        size = read(0, buffer, 32);
        write(1, buffer, size);
        if (size == 0)
            break;
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        return my_cat_noargs();
    for (int i = 1; i < argc; i++)
        my_cat(argv[i]);
}
