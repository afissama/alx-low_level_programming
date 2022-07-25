#include <stdlib.h>
#include <stdio.h>

/**
 * clear_bit -  Set bit to 0 at index
 *
 * @n: unsigned long int
 * @index: index to check
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
	{
		return (-1);
	}

	*n = (*n & (~(1UL << (index))));
	return (1);
}
