#include <stdio.h>
#include <string.h>

int _contain(char *s, char *c);
int _strlen(char *s);
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
	if (needle[0] == '\0')
	{
		return (&haystack[pos]);
	}

	while (haystack[pos] != '\0')
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
	while (s[pos] != '\0')
	{
		if (s[pos] != c[pos])
		{
			return (0);
		}
		pos++;
	}
	return (pos);
}
