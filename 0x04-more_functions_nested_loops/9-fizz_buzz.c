#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Null
 */
int main(void)
{
	int i;
	char a[] = "Fizz";
	char b[] = "Buzz";
	char ab[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%s ", a);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", b);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", ab);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
