#include <stdio.h>
/**
 * _strchr - return first occurence address
 *
 * @s: char*
 * @c: char
 *Return: char*
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}

	return (NULL);
}
