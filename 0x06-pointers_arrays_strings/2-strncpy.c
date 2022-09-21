#include "main.h"
#include <string.h>

/**
 *_strncpy-A function which copies a string
 *
 *@dest: String of the destination file
 *@src: String of the source file
 *@n: Variable to help in editing
 *
 *Return: Returns the source file
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	n = strlen(src);

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

