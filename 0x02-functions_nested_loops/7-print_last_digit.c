#include "main.h"
#include "6-abs.c"

/**
 *print_last_digit - This function prints the last digit
 *
 *@r: integer of the last digit
 *
 *Return: 0 (success)
 */

int print_last_digit(int r)
{
	_putchar(_abs(r % 10) + '0');
	return (_abs(r % 10));
}

