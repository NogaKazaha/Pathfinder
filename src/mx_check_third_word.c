#include "pathfinder.h"

char *mx_check_third_word(char *mat, int line) {
    if (*mat == '\n')
        mx_error_invalid_line_value(line);
    while (*mat != '\n' && *mat) { //проверка длинны моста
        if (!mx_isdigit(*mat))            
            mx_error_invalid_line_value(line);
        mat++;
    }
    return mat;
}
