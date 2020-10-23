#include "pathfinder.h"

int **mx_pathfinder_rout_matrix_init(int c) {
    int **rout_mat = (int **)malloc(sizeof(int *) * c);

    for (int y = 0; y < c; y++) {
        rout_mat[y] = (int *)malloc(sizeof(int) * c);
        for (int x = 0; x < c; x++) {
            rout_mat[y][x] = x;
        }
    }
    return rout_mat;
}
