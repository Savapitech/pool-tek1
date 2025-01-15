/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday03-savinien.petitjean
** File description:
** my_sort_int_array.c
*/

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int t;

    while (i < size - 1) {
        if (array[i + 1] < array[i]) {
            t = array[i];
            array[i] = array[i + 1];
            array[i + 1] = t;
            i = 0;
        } else
            i++;
    }
}
