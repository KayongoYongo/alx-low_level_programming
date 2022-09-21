#include "main.h"
#include <string.h>
/**
 *reverse_array-A function to reverse an array
 *
 *@a: The array.
 *@n: Number of elements in an array
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}

