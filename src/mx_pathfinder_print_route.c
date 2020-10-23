#include "pathfinder.h"

void mx_pathfinder_print_route(char **uniq_mat, int *stack, int len) {
    mx_printstr("\nRoute: ");
    for (int i = len - 1; i > 0; i--) {
        mx_printstr(uniq_mat[stack[i]]);
        mx_printstr(" -> ");
    }
    mx_printstr(uniq_mat[stack[0]]);
}

