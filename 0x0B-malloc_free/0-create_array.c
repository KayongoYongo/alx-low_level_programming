#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *create_array-This function creates an array
 *
 *@size: The size of bytes to reserve
 *@c: The array
 *
 *Return: The array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));

	if (size <= 0)
	{
		return (NULL);
	}
	else if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
		return (s);
	}
}

