#include "main.h"

/**
 *_isalpha - Returns 0 or 1 depending if c is found
 *
 *@c: character to compare
 *
 *Description - Returns 0 if c s not found in uppercase or lowercase.
 *Returns 1 is c is found in uppercase or lowercase
 *
 *Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

