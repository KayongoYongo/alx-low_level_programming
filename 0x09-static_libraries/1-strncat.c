#include "main.h"
#include <string.h>

/**
 *_strncat - A function that concatenetes two strings
 *
 *@dest: destination string
 *@src: Source string
 *@n : number of times to append
 *
 *Return: character value
 */

char *_strncat(char *dest, char *src, int n)
{
	/*l1 represents the length of destination 1*/
	/*l2 represents the length of source 2*/
	int i, l1;

	l1 = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (dest);
}

