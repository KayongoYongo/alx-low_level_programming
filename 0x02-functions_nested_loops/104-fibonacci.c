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
	float i = 1;
	float j = i + 1;
	float sum = 0;
	int k;

	printf("%.0f, ", i);
	printf("%.0f, ", j);

	for (k = 0; k < 96; k++)
	{
		sum = i + j;
		printf("%.0f", sum);

		i = j;
		j = sum;
		if (k != 95)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

