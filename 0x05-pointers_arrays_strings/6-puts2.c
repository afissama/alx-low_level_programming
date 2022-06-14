#include "main.h"
#include <stdio.h>

/**
 * puts2 - print the given string
 * @str: string passing pointer
 *
 */
void puts2(char *str)
{
	int _size = _strlen(str);
	int i = 0;

	for (i = 0; i < _size; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}

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
