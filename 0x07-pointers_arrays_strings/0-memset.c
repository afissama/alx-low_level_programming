#include <stdio.h>
/**
 * _memset - replace the first n character with constant
 *
 * @s: char*
 * @b: char
 * @n: unsigned int
 *Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > i)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
