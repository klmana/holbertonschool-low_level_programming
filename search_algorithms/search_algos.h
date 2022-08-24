#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
#endif
