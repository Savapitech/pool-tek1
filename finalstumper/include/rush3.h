/*
** EPITECH PROJECT, 2024
** RUSH3_H
** File description:
** Final stumper's header.
*/

#ifndef RUSH3_H_
    #define RUSH3_H_
    #define BUFFER_SIZE 8192
    #define EXIT_ERROR -84
    #define EXIT_ERROR_MSG "none\n"
    #include <unistd.h>
    #include <stdlib.h>
typedef struct {
    char *buff;
    char *format;
    int x;
    int y;
} dimensions_t;
int parser(char *);
char *gen_format(dimensions_t *, char *);
int my_strlen(char const *);
int my_strcmp(char const *, char const *);
int my_putchar(char);
int my_putstr(char const *);
int my_put_nbr(int);
int compare_formats(char *, const char *);
void display(dimensions_t *, int *count_index);
#endif /* RUSH3_H_ */
