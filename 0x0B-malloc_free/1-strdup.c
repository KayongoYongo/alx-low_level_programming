#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 *_strdup- A function that returns a pointer to a duplicated string.
 *
 *@str:-The string to be duplicated
 *
 *Return: Returns the duplicated string.
 */

char *_strdup(char *str)
{
	int  i;
	char *dest;
	int length;

	length = strlen(str);

	dest = malloc(sizeof(char) * (length + 1));

	if (dest == NULL)
	{
		return (NULL);
	}
	else
	{
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < length && str[i] != '\0'; i++)
			{
				dest[i] = str[i];
			}
		dest[i] = '\0';
		return (dest);
		}
	}
}
