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
	int k;

	printf("%ld", j);
	printf(", ");

	for (k = 0; k < 24; k++)
	{
		i = i + j;
		j = i + j;
		printf("%ld", i);
		printf(", ");
		printf("%ld", j);
		printf(", ");
		if (j == 7778742049)
		{
			printf("%ld", j);
		}
	}
	printf("\n");
	return (0);
}

