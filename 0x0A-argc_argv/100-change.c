#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include "abs.c"
#include "str_to_pos_int.c"

/**
 * main - main Entry
 *
 * @argc: int
 * @argv: char**
 *
 * Return: int
 */
int main(int argc, char const *argv[])
{
	int numb;

	if (argc != 2)
	{
		print_err();
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	numb = _check_min_change(atoi(argv[1]));
	print_number(numb);
	_putchar('\n');
	return (0);
}

/**
 * _check_min_change - return min amount of change
 *
 * @n: amount of money
 * Return: int
 */
int _check_min_change(int n)
{
	int temp_change, temp_n, pos, old_n;
	int const possibilities[] = {25, 10, 5, 2, 1};

	if (n == 1)
	{
		return (1);
	}
	temp_change = n;
	temp_n = 0;
	pos = 0;
	while (temp_change != 0)
	{
		if (temp_change >= possibilities[pos])
		{
			temp_change -= possibilities[pos];
			temp_n += 1;
		}
		else
		{
			pos++;
		}
	}


	old_n = _check_min_change(n - 1) + 1;
	if (temp_n < old_n)
	{
		return (temp_n);
	}

	return (old_n);
}

/**
 * print_err - print error
 *
 */
void print_err(void)
{
	char *err;
	int pos;

	err = "Error";
	pos = 0;
	while (err[pos])
	{
		_putchar(err[pos]);
		pos++;
	}
	_putchar('\n');
}
