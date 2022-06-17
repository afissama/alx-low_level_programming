#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the given string
 * @a: array of int passing pointer
 * @n: array length
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}

}
