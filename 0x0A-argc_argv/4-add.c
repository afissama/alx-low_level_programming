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
int main(int argc, char *argv[])
{
	int j, sum;


	if (argc < 2)
	{
		_putchar('0');
		_putchar('\n');
		return (1);
	}


	j = 0;
	sum = 0;
	for (j = 1; j < argc; j++)
	{
		if (_convert_to_int(argv[j]) == -1)
		{
			print_err();
			return (1);
		}
		sum += _convert_to_int(argv[j]);
	}
	print_number(sum);
	_putchar('\n');

	return (0);
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
