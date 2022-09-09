#include <stdio.h>
/**
 *main - Entry point of the program
 *
 *Description: Print all all alphabets except e and q
 *
 *Return: Always 0
 */

int main(void)
{
	/*l represents the lowercase letter*/
	char l = 'a';

	do {
		if (l == 'q' || l == 'e')
		{
		l++;
		continue;
		}
		putchar(l);
		l++;
	} while (l <= 'z');
	putchar('\n');
	return (0);
}

