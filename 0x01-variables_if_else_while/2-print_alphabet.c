#include <stdio.h>
/**
 *main - entry point
 *
 *Description: Returns a to z in lowercase
 *
 *Return: always 0
 */

int main(void)
{
	/*letter l represents the lowercase*/
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}

