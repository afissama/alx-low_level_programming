#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * cap_string - uppercas the given string words
 * @str: The string
 *
 * Return: uppercase sentence
 */
char *cap_string(char *str)
{
	int i = 1;

	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t'
		|| str[i - 1] == '\n' || str[i - 1] == ','
		|| str[i - 1] == ';' || str[i - 1] == '.'
		|| str[i - 1] == '!' || str[i - 1] == '?'
		|| str[i - 1] == '"' || str[i - 1] == '('
		|| str[i - 1] == ')' || str[i - 1] == '}'
		|| str[i - 1] == '{' || i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ' ';
			}
		}
		i++;
	}

	return (str);
}
