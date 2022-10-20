#include "main.h"

/**
 * print_line - Entry point
 * @n: integer
 * Return: Null
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
