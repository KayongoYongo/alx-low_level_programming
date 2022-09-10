#include <stdio.h>
/**
 *main - entry point
 *
 *Description: Returns tow 2 digit numbers from 0 to 100
 *
 *Return: always 0
 */

int main(void)
{
	/*i represents numbers*/
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (!(i == 98 && j == 99))
		 	{
		 		putchar(',');
		 		putchar(' ');
		 	}
		}
	}
	putchar('\n');
	return (0);
}

