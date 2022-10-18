#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 *
 * Return: Always null
 *
 */
int _islower(int c)
{
	char i;
	int ret = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
