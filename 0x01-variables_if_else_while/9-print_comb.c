#include <stdio.h>
/**
 *main - entry point
 *
 *Description: prints single digit numbers with a comma
 *
 *Return: always 0
 */

int main(void)
{
	/*n represents all the single digit numbers*/
	int i;
	int j;

	for (i = 10; i <= 19; i++)
	{
		for (j = 10; j <= 19; j++)
		{
		 	if ((j % 10) > (i % 10))
			{
				putchar((i % 10) + ('0'));
				putchar((j % 10) + ('0'));
				if (i != 18 || j != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return(0);
			
}

