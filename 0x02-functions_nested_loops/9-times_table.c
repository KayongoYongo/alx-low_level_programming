#include "main.h"

/**
 *times_table - times the table function
 *
 */

void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');

			if (j < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

