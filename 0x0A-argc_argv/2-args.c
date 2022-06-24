#include "main.h"

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
	int i;
	int j;

	j = 0;
	for (j = 0; j < argc; j++)
	{
		i = 0;
		while (argv[j][i])
		{
			_putchar(argv[j][i]);
			i++;
		}
		_putchar('\n');
	}

	return (0);
}
