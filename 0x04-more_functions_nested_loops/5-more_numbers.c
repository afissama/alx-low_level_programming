#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

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
		return ('-');
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

/**
 * numbers - print 0 to 14
 *
 */
void numbers(void)
{
	int i = 0;
	char f_n = get_first_digit(i);
	char l_n = get_last_digit(i);

	for (i = 0; i <= 14; i++)
	{
		f_n = get_first_digit(i);
		l_n = get_last_digit(i);

		if (f_n != '-')
		{
			_putchar(f_n);
		}
		_putchar(l_n);
	}
}

/**
 * more_numbers - call numbers 10 times
 *
 */
void more_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		numbers();
		_putchar('\n');
	}
}
