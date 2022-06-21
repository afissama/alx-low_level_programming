#include <stdio.h>

int _contain(char *s, char c);
/**
 * _strpbrk - return length of initial
 *
 * @s: char*
 * @accept: char*
 *Return: char*
 */
char *_strpbrk(char *s, char *accept)
{
	int pos = 0;

	while (s[pos])
	{
		if (_contain(accept, s[pos]))
		{
			return (&s[pos]);
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
int _contain(char *s, char c)
{
	unsigned int pos;

	pos = 0;
	while (s[pos])
	{
		if (s[pos] == c)
		{
			return (1);
		}
		pos++;
	}
	return (0);
}
