#include "main.h"
#include <stdio.h>

/**
 * puts_half - print second half of string
 * @str: string passing pointer
 *
 */
void puts_half(char *str)
{
	int _size = _strlen(str);
	int i = 0;
	int half_size = 0;

	if ((_size % 2) == 0)
	{
		half_size = _size / 2;
	}
	else
	{
		half_size = (_size - 1) / 2;
	}

	for (i = half_size; i < _size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - return the length of parsing param
 * @s: string passing pointer
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}
