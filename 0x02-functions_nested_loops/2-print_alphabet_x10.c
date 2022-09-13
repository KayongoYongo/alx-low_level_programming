#include "main.h"

/**
 *print_alphabet_x10 - Prints the alphabet 10 times
 *
 *Description - Prints the alphabet 10 times.
 *
 *Return always 0
 */

void print_alphabet_x10(void)
{
	/*l represents any lowercase letter*/
	char l;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}

