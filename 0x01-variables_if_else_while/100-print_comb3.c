#include <stdio.h>
/**
 *main - entry point
 *
 *Description: print double digit numbers
 *
 *Return: always 0
 */

int main(void)
{
	/*i and j represents a two digit number*/
	int i = 0;
	int j;


	for (i = 10; i <= 19; i++)
	{
		for (j = 10; j <= 19; j++)
		{
			if ((j % 10) > (i % 10)
			{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i != 18 || j != 19)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('n');
	return (0);

}
