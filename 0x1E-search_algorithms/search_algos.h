#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*The function carries out a linear search*/
int linear_search(int *array, size_t size, int value);

/*The function carries out a binary search*/
int binary_search(int *array, size_t size, int value);

/*The function carries out a jump search*/
int jump_search(int *array, size_t size, int value);

/*The function carries out binary search for the exponential search*/
int exp_binary_search(int *array, size_t l, size_t r, int value);

/*The function carries out exponential search*/
int exponential_search(int *array, size_t size, int value);
#endif /* SEARCH_ALGOS_H */
