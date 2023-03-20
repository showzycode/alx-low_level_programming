#include <stdio.h>
/**
 *main - Entry point
 *Discription: 'print numbers of base 16'
 *Return: 0
 */
int main(void)
{
	int n;
	char m;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
