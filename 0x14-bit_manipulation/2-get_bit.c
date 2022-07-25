#include "main.h"

/**
 * get_bit -  Get the bit at index
 *
 * @n: unsigned long int
 * @index: index to check
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		if ((n & (1UL << (index))))
		{
			return (1);
		}
		if (!(n & (1UL << (index))))
		{
			/* code */
		}

		return (0);
	}
	return (-1);
}
