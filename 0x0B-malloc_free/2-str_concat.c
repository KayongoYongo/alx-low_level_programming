#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 *str_concat- A function that returns a pointer to a duplicated string.
 *
 *@s1:The string to be appended to.
 *@s2:The string to add to string 1
 *
 *
 *Return: Returns the duplicated string.
 */

char *str_concat(char *s1, char *s2)
{
	int i, l1, l2, l;
	char *dest;

	l1 = strlen(s1);
	l2 = strlen(s2);
	l = l1;

	dest = malloc(sizeof(char) * (l + l2 + 1));

	if (s1 != NULL && s2 != NULL)
	{
		/*Due to the nature of string 1 and 2, they are both in a read only format*/
		/*We have to create a new string called s and copy the contents of s1 to it*/
		for (i = 0; i < l1 && s1[i] != '\0'; i++)
		{
			dest[i] = s1[i];
		}
		/*This part involves the actual concatenation of s2 to S*/
		for (i = 0; i < l2; i++)
		{
			dest[l + i] = s2[i];
		}
		dest[l + i] = '\0';
		return (dest);
	}
	else
	{
		return (NULL);
	}
}

