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
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

