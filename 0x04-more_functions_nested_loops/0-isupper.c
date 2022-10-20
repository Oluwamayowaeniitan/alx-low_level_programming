#include "main.h"

/**
 * _isupper - Entry point
 * @i: character
 * Return: 1 if c is upper and 0 if otherwise
 */
int _isupper(int c)
{
	int i;
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (0);
		}
	}
	return (1);
}
