#include <stdio.h>

int _contain(char *s, char *c);
/**
 * _strstr - function finds the first occurrence of the substring
 *			needle in the string haystack
 *
 * @haystack: char*
 * @needle: char
 *Return: char*
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int pos;

	pos = 0;
	while (haystack[pos])
	{
		if (_contain(needle, &haystack[pos]) > 0)
		{
			return (&haystack[pos]);
		}
		pos++;
	}

	return (NULL);
}

/**
 * _contain - check if string contains given character
 *
 * @s: char*
 * @c: char
 * Return: int
 */
int _contain(char *s, char *c)
{
	unsigned int pos;

	pos = 0;
	while (s[pos])
	{
		if (s[pos] != c[pos])
		{
			return (0);
		}
		pos++;
	}
	return (pos);
}
