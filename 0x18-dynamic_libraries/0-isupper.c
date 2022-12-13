#include "main.h"

/**
 *_isupper-This program returns if a number is in uppercase
 *
 *@c: character to check
 *
 *Return: gives 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);

}

