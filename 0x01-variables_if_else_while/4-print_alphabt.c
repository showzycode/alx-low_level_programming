#include <stdio.h>
/**
 * main - Entry (Sucess)
 *
 *Return: 0 Always (Sucess)
 */
int main(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		if (e != 'e' && e != 'q')
			putchar(e);
	}
	putchar('\n');

	return (0);
}
