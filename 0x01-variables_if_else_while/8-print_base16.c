#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int g;
	char low;

	for (g = '0'; g <= '9'; g++)
		putchar(g);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);

	return (0);
}
