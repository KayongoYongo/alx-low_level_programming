#include "search_algos.h"
/**
 * binary_search - binary search on array
 * @array: Array to search
 * @size: Size to go trough
 * @value: The value to search
 * Return: int value
 */

int binary_search(int *array, size_t size, int value)
{
	/*l stands for left, r stands for right, m stands for mid*/
	size_t i, l, r, m;

	l = 0;
	r = size - 1;

	if (array == NULL)
		return (-1);

	while (l < r)
	{
		m = (l + r) / 2;

		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[r]);

		if (value == array[m])
			return (m);

		else if (value < array[m])
			r = m - 1;

		else
			l = m + 1;
	}
	return (-1);
}
