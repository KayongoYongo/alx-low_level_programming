#include <stdio.h>
/**
 *main - entry point
 **
 *Description: Returns numbers 0 to 10
 *
 *Return: always 0
 **/

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

