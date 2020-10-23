#ifndef PATHFINDER
#define PATHFINDER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdbool.h>
#include <fcntl.h>
#include <malloc/malloc.h>
#include "libmx.h"

//---ERROR PACK---
char **mx_pathfinder_errorc_heck_all(char **argv, int argc, int *isl_count);
void mx_pathfinder_check_the_line(char *mat);

//---PARTH PACK---
char **mx_pathfinder_uniq_matrix(char **matrix, int *isl_count);
char **mx_pathfinder_matrix_init(char *argv, int *isl_count);
int **mx_pathfinder_adj_matrix(char **mat, char **uniq_mat, int count);
int **mx_pathfinder_rout(int **adj_mat, int count);
void mx_pathfinder_output(char **uniq_mat, int **adj_mat, int **rout_mat);
void mx_pathfinder_print(char **uniq_mat, int **adj_mat, int *stack);

//---UTILS FOR PATHFINDER---
void mx_pathfinder_clear(char **mat, char **uniq_mat, int **adj_mat, int **rout_mat);
int **mx_pathfinder_adj_matrix_fill(int c);
void mx_error_invalid_line_value(int line);
char *mx_check_first_word(char *mat, int line);
char *mx_check_second_word(char *mat, int line);
char *mx_check_third_word(char *mat, int line);
void mx_pathfinder_error_invalid_first_line(char *str);
void mx_pathfinder_error_invalid_argc(int i);
char *mx_pathfinder_error_invalid_name(char *str);
int *mx_pathfinder_stack_fill(int *res);
void mx_pathfiner_stack(int *stack, int i, int *a);
int **mx_pathfinder_rout_matrix_init(int c);
void mx_pathfinder_print_path(char **uniq_mat, int *stack, int len);
void mx_pathfinder_print_route(char **uniq_mat, int *stack, int len);
void mx_pathfinder_print_dist(int **adj_mat, int *stack, int len);
void mx_pathfinder_error_num();
char **mx_pathfinder_temp_matrix(char **src);
void mx_pathfinder_dupdel(char **buf, int *count);

#endif
