#include "pathfinder.h"

int main (int argc, char **argv) {
    char **matrix = NULL;
    char **uniq_matrix = NULL;
    int **adj_matrix = NULL;
    int **rout_matrix = NULL;
    int isl_count = 0;
    matrix = mx_pathfinder_errorc_heck_all(argv, argc, &isl_count);
    uniq_matrix = mx_pathfinder_uniq_matrix(matrix, &isl_count);
    adj_matrix = mx_pathfinder_adj_matrix(matrix, uniq_matrix, isl_count);
    rout_matrix = mx_pathfinder_rout(adj_matrix, isl_count);
    mx_pathfinder_output(uniq_matrix, adj_matrix, rout_matrix);
    mx_pathfinder_clear(matrix, uniq_matrix, adj_matrix, rout_matrix);
}
