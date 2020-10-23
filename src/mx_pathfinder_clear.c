#include "pathfinder.h"

void mx_pathfinder_clear(char **mat, char **uniq_mat, int **adj_mat, int **rout_mat) {
    int count = 0;
    while (uniq_mat[count]) {
        count++;
    }
    mx_del_strarr(&mat);
    mx_del_strarr(&uniq_mat);
    for (int i = 0; i < count; i++) {
        free(adj_mat[i]);
    }
    free(adj_mat);
    for (int i = 0; i < count; i++) {
        free(rout_mat[i]);
    }
    free(rout_mat);
}
