/*
** EPITECH PROJECT, 2024
** rush2
** File description:
** rush2_3.c
*/

#include "lib.h"
#include "rush2.h"

static
const int frequencies[4][26] = {
    {
        8167, 1492, 2782, 4253, 12702, 2228, 2015, 6094,
        6966, 153, 772, 4025, 2406, 6749, 7507, 1929,
        95, 5987, 6327, 9056, 2758, 978, 2360, 150, 1974, 74
    },
    {
        7636, 901, 3260, 3669, 14715, 1066, 866,
        737, 7529, 613, 74, 5456, 2968, 7095, 5796, 2521,
        1362, 6693, 7948, 7244, 6311, 1838, 49, 427, 128, 326
    },
    {
        6516, 1886, 2732, 5076, 16396, 1656, 3009, 4577,
        6550, 268, 1417, 3437, 2534, 9776, 2594, 670,
        18, 7003, 7270, 6154, 4166, 846, 1921, 34, 39, 1134
    },
    {
        11525, 2215, 4019, 5010, 12181, 692, 1768, 703, 6247,
        493, 11, 4967, 3157, 6712, 8683, 2510, 877, 6871, 7977,
        4632, 2927, 1138, 17, 215, 1008, 467
    }
};

void check_language(int nb_letter, int diff[nb_letter][4])
{
    int lang = 0;
    int average = 100001;
    int tempo = 0;
    int language = 0;

    for (; lang < 4; lang++) {
        for (int k = 0; k < nb_letter; k++)
            tempo += diff[k][lang];
        tempo /= 4;
        if (tempo < average) {
            average = tempo;
            language = lang;
        }
    }
    display_language(language);
}

void check_frequency(int perc, char a, int *lang_diff)
{
    for (int i = 0; i < 4; i++)
        lang_diff[i] = MY_ABS(frequencies[i][my_tolower(a) - 97] - perc);
}

void my_print_perc(int count, int len)
{
    float perc = (float)count * 100 / (float)len;
    int percc = (int)(perc * 100);

    my_put_nbr(perc);
    my_putchar('.');
    if (percc % 100 >= 10) {
        my_put_nbr(percc % 100);
    } else {
        my_put_nbr(percc % 100);
        my_put_nbr(0);
    }
    my_putstr("%)");
    my_putchar('\n');
}

int search_char(int count, char **av, int i)
{
    for (char *p = av[1]; *p != '\0'; p++)
        if (my_tolower(*p) == my_tolower(av[i][0]))
            count++;
    return (count);
}

void rush2_4(int ac, char **av)
{
    int count;
    int len = my_strlen_onlyalpha(av[1]);
    int diff[ac - 2][4];
    int lang_diff[4];

    my_strtolower(av[1]);
    for (int i = 2; i < ac; i++) {
        count = 0;
        count = search_char(count, av, i);
        check_frequency(((float)count * 100 / (float)len) * 1000,
            av[i][0], lang_diff);
        for (int ii = 0; ii < 4; ii++)
            diff[i - 2][ii] = lang_diff[ii];
        my_putchar(av[i][0]);
        my_putchar(':');
        my_put_nbr(count);
        my_putstr(" (");
        my_print_perc(count, len);
    }
    check_language(ac - 2, diff);
}
