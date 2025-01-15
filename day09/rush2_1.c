#include "lib.h"

int main(int ac, char **av)
{
  rush2_1(av);
  return 0;
}

void rush2_1(char **av)
{
    int count = 0;

    for (char *p = av[1]; *p != '\0'; p++)
        if (*p == av[2][0])
            count++;
    my_putchar(av[2][0]);
    my_putchar(':');
    my_put_nbr(count);
}
