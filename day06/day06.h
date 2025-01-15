/*
** EPITECH PROJECT, 2024
** day6
** File description:
** day06.h
*/

#ifndef DAY6_H_
    #define DAY6_H_
    #include <ctype.h>
    #include <stddef.h>
int my_strlen(char const *);
char *my_strcpy(char *, char *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strstr(char *, char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char *);
int my_str_isnum(char *);
int my_str_islower(char *);
int my_str_isupper(char *);
int my_str_isprintable(char *);
#endif /* DAY6_H_ */
