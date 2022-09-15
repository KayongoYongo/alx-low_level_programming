#include "main.h"

/**
 *print_numbers-This function rpints from 0 to 9
 *
 *@void: Function takes in no value
 *
 */

void print_numbers(void)
{
	int l;

	for (l = 0; l <= 9; l++)
	{
		_putchar(l % 10 + '0');
	}
	_putchar('\n');
}

