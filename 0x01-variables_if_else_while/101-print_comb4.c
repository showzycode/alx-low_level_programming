#include <stdio.h>
/**
 * main - a program that print
 * Return value 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
			for (k = 2; k < 10; k++)
			{
				if (i < j && j < k)
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	return (0);
}

