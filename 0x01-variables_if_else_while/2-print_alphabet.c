#include <stdio.h>
/**
 *main - entry point
 *
 *Description: Returns a to z in lowercase
 *
 *Return: always 0
 */

int main(void)
{	
	char alphabet = 'a';

	for (; alphabet <= 'z' ; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
