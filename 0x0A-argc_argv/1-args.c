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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

