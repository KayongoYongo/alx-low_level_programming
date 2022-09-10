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

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}

