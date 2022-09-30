#include <stdio.h>

/**
 *main- returns the name of the executable
 *
 *@argc: value of the elements in the array
 *@argv: array of strings
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i  < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}

