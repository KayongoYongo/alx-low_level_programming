#include <stdio.h>

/**
 *main - Entry point of the program.
 *
 *@void: Takes an empty value..
 *
 *Description: Prints the first 50 fibnacci numbers.
 *
 *Return: always 0(success).
 */

int main(void)
{
	int i = 0;
	int j = 1;
	int k = 0;
	int sum = 0;

	while (k <= 3500000)
	{
		i = j;
		j = k;
		k = i + j;
		
		if (k % 2 != 0)
		{
			continue;
		}
		sum = k + sum;
	}
	printf("%d",sum);
	printf("\n");
	return (0);
}

