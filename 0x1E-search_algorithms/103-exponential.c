#include "search_algos.h"
/**
 * exp_binary_search- binary search on array
 * @l: Left extreme of the array
 * @r: Right extreme of the array
 * @array: The array to be searched
 * @value: The value to search
 * Return: int value
 */

int exp_binary_search(int *array, size_t l, size_t r, int value)
{
	/*l stands for left, r stands for right, m stands for mid*/
	size_t i, m;

	if (array == NULL)
		return (-1);

	while (l <= r)
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

		else if (value > array[m])
			l = m + 1;
	}
	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, right;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
	{
		return (0);
	}

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (exp_binary_search(array, i / 2, right, value));
}
