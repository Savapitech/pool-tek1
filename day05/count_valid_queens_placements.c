/*
** EPITECH PROJECT, 2024
** B-CPE-100-REN-1-1-cpoolday05-savinien.petitjean
** File description:
** my_compute_square_root.c
*/

#include <stdbool.h>

bool is_safe(int size, int map[size][size], int row, int col)
{
    int j1 = col;
    int j2 = col;

    for (int i = 0; i < row; i++)
        if (map[i][col] == 1)
            return false;
    for (int i = row; i >= 0 && j1 >= 0; i--) {
        if (map[i][j1] == 1)
            return false;
        j1--;
    }
    for (int i = row; i >= 0 && j2 < size; i--) {
        if (map[i][j2] == 1)
            return false;
        j2++;
    }
    return true;
}

void solve_n_queens(int size, int map[size][size], int row,
    int *nb_valid_solutions)
{
    if (row == size) {
        *nb_valid_solutions += 1;
        return;
    }
    for (int col = 0; col < size; col++) {
        if (is_safe(size, map, row, col)) {
            map[row][col] = 1;
            solve_n_queens(size, map, row + 1, nb_valid_solutions);
            map[row][col] = 0;
        }
    }
}

int count_valid_queens_placements(int size)
{
    int map[size][size];
    int nb_valid_solutions = 0;

    if (size < 1)
        return 0;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            map[i][j] = 0;
    solve_n_queens(size, map, 0, &nb_valid_solutions);
    return nb_valid_solutions;
}
