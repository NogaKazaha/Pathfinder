#include "pathfinder.h"

char **mx_pathfinder_uniq_matrix(char **matrix, int *isl_count) {
    char **temp = NULL;
    
    temp = mx_pathfinder_temp_matrix(matrix);
    mx_pathfinder_dupdel(temp, isl_count);
    return temp;
}
