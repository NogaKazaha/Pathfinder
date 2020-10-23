#include "pathfinder.h"

int *mx_pathfinder_stack_fill(int *res) {
    for (int i = 0; i < 10; i++) {
        res[i] = -2;
    }
    return res;
}
