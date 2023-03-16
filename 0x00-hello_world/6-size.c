#include<stdio.h>
 /**
 *main -Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
        printf("int size: %lu bytes(s)\n", sizeof(int));
        printf("char size: %lu bytes(s)\n", sizeof(char));
        printf("short size: %lu bytes(s)\n", sizeof(short));
        printf("long size: %lu bytes(s)\n", sizeof(long));
        printf("float size: %lu bytes(s)\n", sizeof(float));
        printf("double size: %lu bytes(s)\n", sizeof(double));
        printf("long double size: %lu bytes(s)\n", sizeof(long double));
	return (0);
}
