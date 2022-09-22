#include "main.h"

/**
 *string_toupper- A function that converts lowercase to uppercase
 *
 *@s: The variable to be converted
 *
 *Return: The value after it has been converted
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; i != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}

