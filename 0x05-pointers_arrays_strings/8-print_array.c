#include "main.h"
#include <stdio.h>

/**
 * print_array - print the given string
 * @a: array
 * @n: length of the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}

	}
	printf("\n");
}
