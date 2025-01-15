/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday03-savinien.petitjean
** File description:
** my_print_comb.c
*/

int my_print_comb(void)
{
    int char1;
    int char2;
    int char3;

    for (int i = 0; i < 1000; i++){
        char1 = i / 100;
        char2 = (i / 10) % 10;
        char3 = i % 10;
        if (my_correct_verif(char1, char2, char3) == 1)
            my_print_nbr(char1, char2, char3);
    }
}

int my_correct_verif(int ch1, int ch2, int ch3)
{
    if (ch3 > ch2 && ch2 > ch1)
        return (1);
    else
        return (0);
}

void my_print_nbr(int ch1, int ch2, int ch3)
{
    my_putchar(ch1 + 48);
    my_putchar(ch2 + 48);
    my_putchar(ch3 + 48);
    if (ch1 != 7 || ch2 != 8 || ch3 != 9) {
        my_putchar(',');
        my_putchar(' ');
    }
}
