#include "main.h"
#include <string.h>

/**
 * *_strcat - main function
 * @dest: first character
 * @src: second charcter
 * Return: null
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
