#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Prints numbers and lowercase
 *
 *Return: Always 0
 */

int main(void)
{
	/*l represents lowercase. n represents numbers*/
	char l = 'a';
	int n = 0;

	while (n < 10)
	{
		putchar(n % 10 + '0');
		n++;
	}
	while (l < 'g')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}

