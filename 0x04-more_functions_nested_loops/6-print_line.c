#include "main.h"

/**
 *print_line-the function prints a line
 *
 *@n: The value that will print a line
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

