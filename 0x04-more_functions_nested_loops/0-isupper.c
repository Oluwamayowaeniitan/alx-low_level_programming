#include "main.h"

/**
 * _isupper - Entry point
 * @c: character
 * Return: 1 if c is upper and 0 if otherwise
 */
int _isupper(int c)
{
	char letter;

	int upper = 0;

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (letter == c)
		{
			upper = 1;
			break;
		}
	}
	return (upper);
}
