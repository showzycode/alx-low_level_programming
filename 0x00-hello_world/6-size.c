#include <stdio.h>
 /**
 * main - A program that print the size of various computer types
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("int size: %lu bytes(s)\n", (unsigned int)sizeof(a));
printf("char size: %lu bytes(s)\n", (unsigned char)sizeof(b));
printf("long int size: %lu bytes(s)\n", (unsigned long int)sizeof(c));
printf("float size: %lu bytes(s)\n", (unsigned float)sizeof(d));
printf("long long int size: %lu bytes(s)\n", (unsigned long long int)sizeof(f));
return (0);
}
