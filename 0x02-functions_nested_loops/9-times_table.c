#include "main.h"
#define size 10
/**
 * times_table - Entry point
 * Description: Time table
 * Return: null;
 */
void times_table(void)
{
	int i, j;
	int mat[size][size];

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
			mat[i][j] = i * j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar("%5d ", mat[i][j]);
		_putchar('\n');
	}
}
