#include "main.h"

/**
 *_islower - This program checks if a letter is in lowercase
 *
 *Description: The program returns 1 if lowercase. 0 if upper.
 *
 *Return: Eiter 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

