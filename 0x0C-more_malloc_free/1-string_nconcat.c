#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - checks malloc
 *@s1:source string
 *@s2:destination string
 *@n: amount of bytes to allocate
 *Return: a pointer or void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1, l2;
	char *dest;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n >= l2)
		n = l2;

	dest = malloc(sizeof(char) * (l1 + n + 1));

	if (dest == NULL)
		return (NULL);

	if (s1 != NULL && s2 != NULL)
	{
		for (i = 0; i < l1 && s1[i] != '\0'; i++)
		{
			dest[i] = s1[i];
		}
		dest[i] = '\0';
		for (i = 0; i < n; i++)
		{
			dest[l1 + i] = s2[i];
		}
		dest[l1 + i] = '\0';
		return (dest);
	}
	else
	{
		return (NULL);
	}
}
