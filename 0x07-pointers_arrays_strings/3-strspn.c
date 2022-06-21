#include <stdio.h>
/**
 * _strspn - return length of initial
 *
 * @s: char*
 * @accept: char
 *Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int pos;

	pos = 0;
	while (s[pos])
	{
		if (_contain(accept, s[pos]) == 0)
		{
			return (pos);
		}
		pos++;
	}
	return (pos);
}

/**
 * _contain - check if string contains given character
 *
 * @s: char*
 * @c: char
 * Return: int
 */
int _contain(char *s, char c);
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
