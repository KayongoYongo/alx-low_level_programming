#include "main.h"

/**
 *_pow_recursion- The functions finds the power of x via recursion
 *
 *@x: The base value
 *@y: The power value
 *
 *Return: 0 or the power value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}

