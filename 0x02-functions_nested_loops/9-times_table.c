#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * times_table - print 9 tables
 *
 */
void times_table(void)
{
	int i;
	int j;
	char f_digit;
	char l_digit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			f_digit = get_first_digit(i * j);
			l_digit = get_last_digit(i * j);

			if (j != 0)
			{
				_putchar(f_digit);
			}

			_putchar(l_digit);

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * get_first_digit - get the first value of two digit
 * @n: The number to check
 *
 * Return:  integer (first digit of n)
 */
char get_first_digit(int n)
{
	int val = n / 10;

	if (val == 0)
	{
		return (' ');
	}
	return ('0' + val);
}

/**
 * get_last_digit - get the last value of two digit
 * @n: The number to check
 *
 * Return:  integer (last digit of n)
 */
char get_last_digit(int n)
{
	int val = n % 10;

	return ('0' + val);
}
