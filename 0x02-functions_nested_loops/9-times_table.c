#include "main.h"
/**
 *times_table - prints a multiplication table of 9
 *
 */

void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j<= 9; j++)
		{
			prod = i * j;
			
			if (prod <= 9)
			{	
				_putchar(prod % 10 + '0');
			}
			else 
			{	
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}	
				
		}
		_putchar('\n');
	}
}

