#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary format or a given number
 *
 * @n: given number
 */
void print_binary(unsigned long int n)
{
	unsigned long i;

	i = nb_digits_in_bin(n);
	while (i)
	{
		if ((n & (1UL << (i - 1))))
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
int nb_digits_in_bin(unsigned long n)
{
	int count;

	count = 0;
	do {
		n = n >> 1UL;
		count++;
	} while (n != 0);
	return (count);
}
