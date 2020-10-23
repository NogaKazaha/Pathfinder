#include "pathfinder.h"

void mx_pathfinder_dupdel(char **buf, int *count) {
    int len = 0;
    char *tmp = NULL;

    while (buf[++len]);
    for (int i = 0; i < len; i++) {
        for (int k = i + 1; k < len; k++) {
            if (mx_strcmp(buf[i], buf[k]) == 0) {
                tmp = buf[k];
                for (int j = k; j < len; j++) {
                    buf[j] = buf[j + 1];
                }
                mx_strdel(&tmp);
                len--;
                k -= 1;
            }
        }
    }
    if (len != *count)
        mx_pathfinder_error_num();
}
