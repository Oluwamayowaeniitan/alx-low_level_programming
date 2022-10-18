#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - check the code
 *
 * Return: Always null
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	putchar('\n');
}
