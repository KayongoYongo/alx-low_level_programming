#include "main.h"
#include <string.h>

/**
 *_strcat - A function that concatenetes two strings
 *
 *@dest: destination string
 *@src: Source string
 *
 *Return: character value
 */

char *_strcat(char *dest, char *src)
{
	/*l1 represents the length of destination 1*/
	/*l2 represents the length of source 2*/
	int i, l1, l2;

	l1 = strlen(dest);
	l2 = strlen(src);

	for (i = 0; i < l2; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (dest);
}

