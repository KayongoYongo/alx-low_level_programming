#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*The function carries out a linear search*/
int linear_search(int *array, size_t size, int value);

/*The function carries out a binary search*/
int binary_search(int *array, size_t size, int value);
#endif /* SEARCH_ALGOS_H */
