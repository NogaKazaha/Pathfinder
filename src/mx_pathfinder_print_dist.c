#include "pathfinder.h"

void mx_pathfinder_print_dist(int **adj_mat, int *stack, int len) {
    mx_printstr("\nDistance: ");
    if (len - 2 != 0) {
        for (int i = len - 1; i > 0; i--) {
            mx_printint(adj_mat[stack[i]][stack[i - 1]]);
            if (i - 1 != 0)
                mx_printstr(" + ");
            else {
                mx_printstr(" = ");
                mx_printint(adj_mat[stack[len - 1]][stack[0]]);
            }
        }
    }
    else {
        mx_printint(adj_mat[stack[len - 1]][stack[0]]);
    }
    mx_printstr("\n========================================\n");
}
