#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit -  Set bit to 1 at index
 *
 * @n: unsigned long int
 * @index: index to check
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || 64 <= index)
	{
		return (-1);
	}

	*n = (*n | (1 << (index)));
	return (1);
}
