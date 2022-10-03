#include <stdio.h>
#include <stdlib.h>

/**
 *helper - does it for me
 *
 *@result: integer I'm testing
 *
 *Return: value
 */
int helper(int result)
{
	if (result >= 25)
	{
		return (result / 25 + helper(result % 25));
	}
	else if (result >= 10 && result < 25)
	{
		return (result / 10 + helper(result % 10));
	}
	else if (result >= 5 && result < 10)
	{
		return (result / 5 + helper(result % 5));
	}
	else if (result >= 2 && result < 5)
	{
		return (result / 2 + helper(result % 2));
	}
	else if (result >= 1 && result < 2)
	{
		return (result / 1 + helper(result % 1));
	}
	else
	{
		return (0);
	}
}

/**
 *main- returns the product
 *
 *@argc: value of the elements in the array
 *@argv: array of strings
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result;

	result = atoi(argv[argc - 1]);

	if (argc == 2)
	{
		if (result < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			printf("%d\n", helper(result));
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

