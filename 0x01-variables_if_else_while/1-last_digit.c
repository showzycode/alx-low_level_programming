#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -Entry point
 *Description: 'get the last degit of a number'
 *Return: Always 0
*/
int main(void)
{	
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
                printf("last digit of %d id %d and is greater than 5", n, ld);
	}
        else if (ld == 0)
	{
		printf("last digit of %d is %d is 0", n, ld);
	}
	else
