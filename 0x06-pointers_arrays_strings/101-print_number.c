#include "main.h"
#include <stdio.h>

/**
 * print_number - reverse the given string
 * @n: array length
 *
 */
void print_number(int n)
{
	int nb_digit = 0;
	int temp = n;
	int t_temp = 0;
	int nb = 0;

	if (temp < 0)
	{
		temp = -temp;
	}

	if (temp == 0)
	{
		nb_digit = 1;
	}
	t_temp = temp;

	while (t_temp > 0)
	{
		t_temp = t_temp / 10;
		nb_digit++;
	}
	t_temp = temp;

	if (n < 0)
	{
		_putchar('-');
	}


	while (nb_digit > 0)
	{
		nb = t_temp / _pow(10, nb_digit - 1);
		t_temp = t_temp - nb * (_pow(10, nb_digit - 1));
		nb_digit--;
		_putchar('0' + nb);
	}
}

/**
 * _pow - return n power p
 * @n: string passing pointer
 * @p: string passing pointer
 *
 * Return: integer
 */
int _pow(int n, int p)
{
	int _p = p;
	int result = 1;

	while (_p != 0)
	{
		result *= n;
		--_p;
	}

	return (result);
}
