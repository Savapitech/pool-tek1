/*
** EPITECH PROJECT, 2024
** RUSH3
** File description:
** Final stumper.
*/

#include "rush3.h"

int main(void)
{
    char buffer[BUFFER_SIZE + 1];
    int offset = 0;
    int len = 1;

    while (len > 0) {
        len = read(0, buffer + offset, BUFFER_SIZE - offset);
        offset += len;
    }
    buffer[offset] = '\0';
    if (len < 0)
        return EXIT_ERROR;
    parser(buffer);
    return 0;
}
