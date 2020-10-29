#include "../inc/libmx.h"

static int file_len(const char *file) {
    short flen = open(file, O_RDONLY);
    short size = 0;
    int len = 0;
    char buf;
    size = read(flen, &buf, 1);
    while (size > 0) {
        size = read(flen, &buf, 1);
        len++;
    }
    close(flen);
    return len;
}

char *mx_file_to_str(const char *file) {
    int fl = open(file, O_RDONLY);
    int sz = 0;
    int size = 0;
    if (fl == -1) {
        close(fl);
        return NULL;
    }
    size = file_len(file);
    if (size == 0) {
        return NULL;
    }
    char *newstr = mx_strnew(size);
    sz = read(fl, newstr, size);
    close(fl);
    return newstr;
}
