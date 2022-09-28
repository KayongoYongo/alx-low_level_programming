#include "main.h"

/**
 *_strlen_recursion- A function which prints out the lenth of a string
 *
 *@s: The string to be measured.
 *
 * Return: The number of characters in a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
		_putchar('\n');
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

