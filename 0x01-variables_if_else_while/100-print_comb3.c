#include <stdio.h>
/**
 *main - entry point
 *
 *Description: print double digit number
 *
 *Return: always 0
 */

int main(void)
{
	/*i and j represent the numbers*/
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{	
			if ((i % 10) == (j % 10)) 
			{
			continue;
			}	
				if(i > j)
				{	
				continue;
				}
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
				
				if (i != 8 || j != 9)
				{		
					putchar(',');
					putchar(' ');
				}	
		}
	}
	putchar('\n');
	return (0);
}

