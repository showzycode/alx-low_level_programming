#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/* Return: Always 0 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = ( 5 % 10);
	if (m > 5)
	printf("last digit of %d is %d  and is greater than 5\n", n, m);;
	if (m == 0)
	printf("last digit of %d is %d and is 0\n", n, m);
	if (m > 6 && n != 0)
	printf("last digit of %d  is %dand is less than 6 and not 0\n", n, m);
	return (0);
}
