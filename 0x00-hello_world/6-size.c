#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
	printf("Size of a char: %i byte(s)\n", (unsigned)sizeof(char));
	printf("Size of a int: %i byte(s)\n", (unsigned)sizeof(int));
	printf("Size of a long int: %i byte(s)\n", (unsigned)sizeof(long int));
	printf("Size of a long long: %i byte(s)\n", (unsigned)sizeof(long long));
	printf("Size of a float: %i byte(s)\n", (unsigned)sizeof(float));
	return (0);
}