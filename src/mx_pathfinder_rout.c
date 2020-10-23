#include "pathfinder.h"

int **mx_pathfinder_rout(int **adj_mat, int count) {
    int **rout_mat = mx_pathfinder_rout_matrix_init(count);

    for (int k = 0; k < count; ++k) {
	    for (int y = 0; y < count; ++y) {
		    for (int x = 0; x < count; ++x) {
                if (adj_mat[y][x] > adj_mat[y][k] + adj_mat[k][x]) {
			        adj_mat[y][x] = adj_mat[y][k] + adj_mat[k][x];
                    rout_mat[y][x] = k;
                }
            }
        }
    }
    return rout_mat;
}
