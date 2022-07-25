#include "main.h"

/**
 * print_binary - print binary format or a given number
 *
 * @n: given number
 */
void print_binary(unsigned long int n)
{
	unsigned int i;

	i = nb_digits_in_bin(n);
	while (i)
	{
		if ((n & (1 << (i - 1))))
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		i--;
	}
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
