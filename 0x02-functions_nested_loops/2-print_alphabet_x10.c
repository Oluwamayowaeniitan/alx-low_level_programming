#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always null
 */
void print_alphabet_x10(void)
{
	char (low);
	int num;

		for (num = 1; num <= 10; num++)
		{
			for (low = 'a'; low <= 'z'; low++)
			{
				putchar(low);
			}
			putchar('\n');
		}
}

