#include <stdio.h>
/**
 *main -entry point
 *
 *Description: Prints alphabet in reverse
 *
 *Return: 0
 */

int main(void)
{
	/*l represents the alphabet*/
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}

