#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * string_toupper - uppercas the given string
 * @str: The string
 *
 * Return: uppercase string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ' ';
		}
		i++;
	}

	return (str);
}
