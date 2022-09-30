#include "main.h"

/**
 *_isdigit-This program checks whether the input is a digit
 *
 * @c: This is the digit which will be checked.
 *
 * Return: The value is eithr 0 or 1.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

