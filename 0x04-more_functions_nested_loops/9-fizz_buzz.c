#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		if ((i % 5) == 0)
		{
			printf("Buzz");
		}

		if ((i % 3) != 0 && (i % 5) != 0)
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
