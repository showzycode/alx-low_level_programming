#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return:1 if c is legit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= '0' && c >= '9')
		return (1);
	else
		return (0);
}

