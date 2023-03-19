#include <stdio.h>
/**
 * main - Numbers from 0 to 99.
 *
 * REturn: always return 0.
 */
int main(void)
{
	int i;
	int j;

	for (i =0; i < 10; i++)
	{
		for (j =0; < 10; j++)
		{
			putchar(i + '0');
			putchar(i + '0');
			putchar(j + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
