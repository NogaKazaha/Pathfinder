#include "pathfinder.h"

char *mx_check_first_word(char *mat, int line) {
    if (*mat == '-') //\0 отсекает последнюю пустую строку
        mx_error_invalid_line_value(line);
    while (*mat != '-' && *mat) { //проверка первого города
        if (!mx_isalpha(*mat))
            mx_error_invalid_line_value(line);
        mat++;
    }
    return mat + 1;
}
