#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_line - get the first value of two digit
 * @n: The number as distance
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
