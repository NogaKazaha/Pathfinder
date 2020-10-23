#include "pathfinder.h"

void mx_pathfiner_stack(int *stack, int i, int *a) {
    stack[*a] = i;
    *a = 1;
}
