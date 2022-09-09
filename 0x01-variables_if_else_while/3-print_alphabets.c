#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Prints uppercase and lowercase of the alphabet
 *
 *Return: Always 0
 */

int main(void)
{
	/*l represents te alphabet in lowercase*/
	/*u represents the alphabet in uppercase*/
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}

