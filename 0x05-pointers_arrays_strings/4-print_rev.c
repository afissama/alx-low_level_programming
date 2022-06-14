#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints in reverse the given string
 * @s: string passing pointer
 *
 */
void print_rev(char *s)
{
	int i = _strlen(s);

	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
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
