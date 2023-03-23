#include "main.h"
/**
 * positive_or_nagative - it checks for positive or nagative value
 * @i: parameter
 * Return: 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
	printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
