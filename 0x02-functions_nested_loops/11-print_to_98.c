#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 *@n: starting number
 * Description: printing n to 98
 *
 * Return: Always null
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			printf(", ");
		}
		printf("\n");
	}
}
