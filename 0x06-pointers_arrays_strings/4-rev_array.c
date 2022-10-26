#include "main.h"

/**
 * reverse_array - main function
 * @a: content
 * @n: element
 * Return: Null
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
