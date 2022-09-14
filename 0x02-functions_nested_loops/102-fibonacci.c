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
	long int i = 0;
	long int j = 1;
	long int sum = 0;
	sum = i + j;
	int k;

	printf("%ld", j);
	printf(", ");
	printf("%ld", sum);
	printf(", ");

	for (k = 0; k < 49; k++)
	{
		i = j;
		j = sum;
		sum = i + j;
		printf("%ld", sum);
		if (k != 48)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

