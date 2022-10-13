#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 *int_index - a function that finds an integer
 *
 *@array: the array to be searched.
 *@size: size of the array
 *@cmp: a pointer to the fnction to compare values
 *
 *Return -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL ||  size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

