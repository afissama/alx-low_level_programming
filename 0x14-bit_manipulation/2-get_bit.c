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
	if ((unsigned int)nb_digits_in_bin(n) > index)
	{
		if ((n & (1 << (index))))
		{
			return (1);
		}
		return (0);
	}
	return (-1);
}

/**
 * nb_digits_in_bin - get the number of n binary digits
 *
 * @n: unsigned long int
 * Return: the number of n digit in binary (int)
 */
int nb_digits_in_bin(unsigned long int n)
{
	int count, temp_n;

	count = 0;
	temp_n = n;
	do {
		temp_n = n >> (++count);
	} while (temp_n != 0);

	return (count);
}
