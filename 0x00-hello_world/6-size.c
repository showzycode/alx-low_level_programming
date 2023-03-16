#include <stdio.h>
 /**
 *main -Entry point
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
printf("int size: %zu bytes(s)\n", sizeof(int));
printf("char size: %zu bytes(s)\n", sizeof(char));
printf("long int size: %zu bytes(s)\n", sizeof(long int));
printf("float size: %zu bytes(s)\n", sizeof(float));
printf("long long int size: %zu bytes(s)\n", sizeof(long long int));
return (0);
}
