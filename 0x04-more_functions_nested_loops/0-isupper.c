#include "main.h"
/**
 * _isupper - checks uppercase or not
 * @c: ascii value
 *
 * Return: 1 if uppercase 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
