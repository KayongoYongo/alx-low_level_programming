#include "main.h"
/**
 *print_alphabet - Entry point of the program
 *
 *Description: The program prints from a to z in lowercase. It uses a function
 *
 *Return: always 0;
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}

