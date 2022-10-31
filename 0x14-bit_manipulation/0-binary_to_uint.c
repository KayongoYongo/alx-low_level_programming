#include "main.h"
#include<stdlib.h>

/**
 *binary_to_uint-A function that converts from binary to decimal
 *
 *@b: The number to be converted.
 *
 *Return: The converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, dec = 0, rem = 0, base = 1;
	int binary;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	binary = atoi(b);

	while (binary != 0)
	{
		rem = binary % 10;
		dec = dec + (rem * base);
		binary = binary / 10;
		base = base * 2;
	}
	if (dec < 0)
	{
		return (dec * -1);
	}
	else
	{
		return (dec);
	}
}

