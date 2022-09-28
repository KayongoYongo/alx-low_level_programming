#include "main.h"

/**
 *factorial- A function that finds the factorial of a number
 *
 *@n: The number to find the factorial
 *
 *Return: Its either 0,1 or the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
