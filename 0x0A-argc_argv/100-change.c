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

	numb = atoi(argv[1]);
	if (numb < 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	numb = _check_min_change(numb);
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
int _check_min_change(long n)
{
	int temp_n, pos, tp, i;
	long temp_change;
	int const possibilities[] = {25, 10, 5, 2, 1};
	int *tab_save = malloc((n + 1) * sizeof(int));

	tab_save[0] = 0;
	tab_save[1] = 1;
	for (i = 2; i < n + 1; i++)
	{
		temp_change = i;
		temp_n = 0;
		pos = 0;
		tp = 0;
		while (temp_change != 0)
		{
			if (temp_change >= possibilities[pos])
			{
				tp = temp_change / possibilities[pos];
				temp_change -= (tp * possibilities[pos]);
				temp_n += tp;
			}
			else
			{
				pos++;
			}
		}

		tab_save[i] = tab_save[i - 1] + 1;
		if (temp_n < tab_save[i])
		{
			tab_save[i] = temp_n;
		}
	}

	return (tab_save[n]);
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
