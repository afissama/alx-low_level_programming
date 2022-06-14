#include "main.h"
#include <stdio.h>

/**
 * swap_int - reset the parsing value to 98
 * @a: first passing pointer
 * @b: second passing pointer
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
