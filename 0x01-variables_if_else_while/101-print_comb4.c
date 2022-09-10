#include <stdio.h>
/**
 *main - entry point
 *
 *Description: Returns numbers 0 to 999 under certin conditions
 *
 *Return: always 0
 */

int main(void)
{
	/*i,j and k represents numbers*/
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if ((i == j) || (i == k) || (j == k))
				{
				continue;
				}
					if ((i < j) && (j < k) && (i < k))
					{
						putchar((i % 10) + '0');
						putchar((j % 10) + '0');
						putchar((k % 10) + '0');

						if ((i != 7) || (j !=8) || (k != 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
			}
		}
	}
	putchar('\n');
	return (0);
}

