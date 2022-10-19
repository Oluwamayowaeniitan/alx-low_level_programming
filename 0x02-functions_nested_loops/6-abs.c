#include "main.h"

/**
 * _abs - Entry point
 * @r: Entry for absolute value
 * Return: Always null
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * (-1));
}
