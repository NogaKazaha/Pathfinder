#include "pathfinder.h"

char *mx_check_second_word(char *mat, int line) {
    if (*mat == ',')
        mx_error_invalid_line_value(line);
    while (*mat != ',' && *mat) { //проверка второго города
        if (!mx_isalpha(*mat))
            mx_error_invalid_line_value(line);
        mat++;
    }
    return mat + 1;
}
