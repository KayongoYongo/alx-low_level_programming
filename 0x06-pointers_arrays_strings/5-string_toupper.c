#include "main.h"

/**
 *string_toupper- A function that converts lowercase to uppercase
 *
 *@str: The variable to be converted
 *
 *Return: The value after it has been converted
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

