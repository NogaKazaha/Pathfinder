#include "pathfinder.h"

void mx_pathfinder_print_path(char **uniq_mat, int *stack, int len) {
    mx_printstr("========================================\nPath: ");
    mx_printstr(uniq_mat[stack[len - 1]]);
    mx_printstr(" -> ");
    mx_printstr(uniq_mat[stack[0]]);
}
