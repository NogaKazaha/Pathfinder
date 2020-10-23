#include "pathfinder.h"

void mx_pathfinder_print(char **uniq_mat, int **adj_mat, int *stack) {
    int len = 0;

    while (stack[len] != -2)
        len++;
    mx_pathfinder_print_path(uniq_mat, stack, len);
    mx_pathfinder_print_route(uniq_mat, stack, len);
    mx_pathfinder_print_dist(adj_mat, stack, len);
}
