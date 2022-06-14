#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse the given string
 * @s: string passing pointer
 *
 */
void rev_string(char *s)
{
	int _size = _strlen(s);
	int i = 0;
	char tmp;

	for (i = 0; i < (_size / 2); i++)
	{
		tmp = s[i];
		s[i] = s[_size - 1 - i];
		s[_size - 1 - i] = tmp;
	}

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
