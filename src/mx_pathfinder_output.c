#include "pathfinder.h"

void mx_pathfinder_output(char **uniq_mat, int **adj_mat, int **rout_mat)
{
    int *stack = malloc(sizeof(int) * 10);
    int k;
    int a = 1;
    for (int i = 0; uniq_mat[i]; i++) {
        for (int j = i + 1; uniq_mat[j]; j++) {
            stack = mx_pathfinder_stack_fill(stack);
            stack[0] = j;
            k = rout_mat[i][j];
            if (k != j) {
                for (int b = j; k != b; a++) {
                    stack[a] = k;
                    b = k;
                    k = rout_mat[i][b];
                }
            }
            mx_pathfiner_stack(stack, i, &a);
            mx_pathfinder_print(uniq_mat, adj_mat, stack);
        }
    }
    free(stack);
}
