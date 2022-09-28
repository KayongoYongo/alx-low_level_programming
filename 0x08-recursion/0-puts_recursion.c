#include "main.h"

/**
 *_puts_recursion-Returns the string
 *
 *@s: The character to be printed
 *
 *Return: The expected value
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

