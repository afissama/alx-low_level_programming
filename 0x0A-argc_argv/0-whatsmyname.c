#include "main.h"

/**
 * main - main Entry
 *
 * @argc: int
 * @argv: char**
 *
 * Return: int
 */
int main(int __attribute__ ((unused)) argc, char const *argv[])
{
	int i;

	i = 0;
	while (argv[0][i])
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
