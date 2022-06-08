#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_to_98 - print from n to 98
 * @n: The number to check
 *
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(" ,");
		}
		else
		{
			printf("\n");
		}
	}
}
