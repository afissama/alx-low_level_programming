#include <stdio.h>
#include <stdlib.h>

int _strlen_recursion(char *s);
/**
 * str_concat - concat two string
 *
 * @s1: char
 * @s2: char
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
	int _str_len, _curs, glob_curs;
	char *str;

	_str_len = _strlen_recursion(s1) + _strlen_recursion(s2);
	str = malloc((_str_len * sizeof(char)) + 1);
	if (str != NULL)
	{
		_curs = glob_curs = 0;
		if (s1 != NULL)
		{
			while (s1[_curs] != '\0')
			{
				str[glob_curs] = s1[_curs];
				glob_curs++;
				_curs++;
			}
		}

		_curs = 0;
		if (s2 != NULL)
		{
			while (s2[_curs] != '\0')
			{
				str[glob_curs] = s2[_curs];
				glob_curs++;
				_curs++;
			}
		}
		str[glob_curs] = '\0';

		return (str);
	}
	return (NULL);
}

/**
 * _strlen_recursion - return the length of parsing param
 * @s: string passing pointer
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (s == NULL)
	{
		return (0);
	}

	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(&s[1]));
}
