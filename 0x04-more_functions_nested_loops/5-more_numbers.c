#include "main.h"

/**
 *more_numbers- This function prints numbers from 0 to 14
 *
 *@void: This function takes in no values.
 *
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
			_putchar(j / 10 + '0');
			}
		_putchar(j % 10 + '0');
		}
	_putchar('\n');
	}
}

