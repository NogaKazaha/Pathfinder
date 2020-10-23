#include "pathfinder.h"

int **mx_pathfinder_adj_matrix_fill(int c) {
    int **buf = (int **)malloc(sizeof(int *) * c);

    for (int y = 0; y < c; y++) {
        buf[y] = (int *)malloc(sizeof(int) * c);
        for (int x = 0; x < c; x++) {
            buf[y][x] = 40000;
            if (x == y) //записываем 0 что бы исключить круги
                buf[y][x] = 0;
        }
    }
    return buf;
}
