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
	int n = 0;

	while (n <= 9)
	{
		putchar(n % 10 + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	n++;
	}
	putchar('\n');
	return (0);
}

