#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the given string
 * @str: string passing pointer
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
