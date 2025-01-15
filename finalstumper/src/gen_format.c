/*
** EPITECH PROJECT, 2024
** gen_format
** File description:
** Gen format
*/

#include "rush3.h"

static
char *gen_format_one(
    dimensions_t *dimensions,
    char *format,
    int last_line_index
)
{
    int width = dimensions->x;
    int height = dimensions->y;

    format[0] = dimensions->buff[0];
    if (width > 1)
        format[1] = dimensions->buff[width - 1];
    if (width > 2)
        format[2] = dimensions->buff[1];
    if (height == 1)
        return format;
    format[5] = dimensions->buff[last_line_index];
    if (width > 1)
        format[6] = dimensions->buff[last_line_index + width - 1];
    if (width > 2)
        format[7] = dimensions->buff[last_line_index + 1];
    if (height > 2) {
        format[3] = dimensions->buff[last_line_index - 2];
        format[8] = format[3];
    }
    return format;
}

static
char *gen_other_format(
    dimensions_t *dimensions,
    char *format,
    int last_line_i
)
{
    if (dimensions->x == 1 || dimensions->y == 1) {
        format[2] = dimensions->buff[0];
        format[3] = format[2];
        format[7] = format[2];
        format[8] = format[2];
        return format;
    }
    return gen_format_one(dimensions, format, last_line_i);
}

char *gen_format(
    dimensions_t *dimensions,
    char *format
)
{
    int last_line_i = my_strlen(dimensions->buff) - 1 - dimensions->x;

    if (dimensions->buff[0] == 'o')
        return gen_format_one(dimensions, format, last_line_i);
    return gen_other_format(dimensions, format, last_line_i);
}

int compare_formats(char *format1, const char *format2)
{
    for (int i = 0; format1[i]; i++)
        if (format1[i] != '?' && format1[i] != format2[i])
            return 1;
    return 0;
}
