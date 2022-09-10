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
/*a represents numbers*/
	int a = 0;

	while (a <= 9)
	{
		putchar(a % 10 + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}

