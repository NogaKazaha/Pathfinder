#include "pathfinder.h"

char **mx_pathfinder_temp_matrix(char **src) {
    char **res = NULL;
    int mal_size = 0;

    while (src[mal_size])
        mal_size++;
    mal_size = mal_size / 3 * 2;
    res = (char **)malloc(sizeof(char *) * mal_size + 1);
    for (int i = 0, k = 0; k < mal_size; i += 3, k += 2) {
        res[k] = mx_strdup(src[i]);
        res[k + 1] = mx_strdup(src[i + 1]);
    }
    res[mal_size] = NULL;
    return res;
}
