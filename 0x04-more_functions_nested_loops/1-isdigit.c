#include "main.h"

/**
 * _isdigit - Entry point
 * @c: integer
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	int num;
	int number = 0;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == c)
		{
			number = 1;
			break;
		}
	}
	return (number);
}
