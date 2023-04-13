#include "search_algos.h"

/**
 * jump_search - searches linear
 * @array: array to search
 * @size: size to go through
 * @value: value to search
 * Return: int value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, left, right;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	left = 0;
	right = 0;

	while (right < size && array[right] < value)
	{
		left = right;
		right += jump;
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	right = (right < size) ? right : size;

	/*The linear search looking for the element*/
	for (i = left; i <= right && i < (unsigned long)size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
