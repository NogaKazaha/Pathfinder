#include "pathfinder.h"

int **mx_pathfinder_adj_matrix(char **mat, char **uniq_mat, int count) {
    int **adj_mat = mx_pathfinder_adj_matrix_fill(count); //заполняем матрицу нулями или чем-то
    int x = 0;
    int y = 0;

    for (int i = 0; mat[i] != NULL; i += 3) {
        for (int k = 0; uniq_mat[k]; k++) { //находим в матрице уникальных Х
            if (mx_strcmp(mat[i], uniq_mat[k]) == 0)
                x = k;
        }
        for (int k = 0; uniq_mat[k]; k++) { //находим в матрице уникальных У
            if (mx_strcmp(mat[i + 1], uniq_mat[k]) == 0)
                y = k;
        }
        adj_mat[y][x] = mx_atoi(mat[i + 2]); //записываем расстояние
        adj_mat[x][y] = adj_mat[y][x];       //и зеркально, т.к. граф ненапр
    }
    return adj_mat;
}
