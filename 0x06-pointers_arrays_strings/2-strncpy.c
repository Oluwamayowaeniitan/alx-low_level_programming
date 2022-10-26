#include "main.h"

/**
 * _strncpy - Main function
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: Null
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		while (i < n)
		{
			dest[i++] = '\0';
		}
	}

	return (dest);
}
