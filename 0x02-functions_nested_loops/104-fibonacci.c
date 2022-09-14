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
	float i = 0;
	float j = 1;
	float sum = 0;
	int k;

	for (k = 0; k < 99; k++)
	{
		i = j;
		j = sum;
		sum = i + j;
		printf("%.0f", sum);
		if (k != 96)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

