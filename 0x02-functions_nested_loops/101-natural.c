#include <stdio.h>

/**
 *main - returns the number divisible by 3 and 5
 *
 *@void: takes an empty value
 *
 *return: always 0(success)
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}

