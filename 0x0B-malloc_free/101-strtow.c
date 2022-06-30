#include <stdio.h>
#include <stdlib.h>

int _strlen_recursion(char *s);
/**
 * strtow - split string into array
 *
 * @str: char**
 * Return: char**
 */
char **strtow(char *str)
{
	char **_totab;
	int _i, _j, _k;

	if (str != NULL && _strlen_recursion(str) != 0)
	{
		_totab = (char **)malloc(_strlen_recursion(str) * sizeof(char *));
		_i = 0, _j = 0, _k = 0;
		if (_totab != NULL)
		{
			while (str[_j])
			{
				while (str[_j] == ' ')
				{
					_j++;
				}
				if (str[_j] != '\0')
				{
					_totab[_i] = malloc((_strlen_recursion(str) * sizeof(char)) - _j);
					if (_totab[_i] == NULL)
					{
						free(_totab);
						return (NULL);
					}

					while (str[_j] != ' ' && str[_j] != '\0')
					{
						_totab[_i][_k] = str[_j];
						_j++;
						_k++;
					}

					if (_k > 0)
					{
						_totab[_i][_k] = '\0';
					}
					_i++;
					_k = 0;
				}
			}
			if (_i > 0)
			{
				return (_totab);
			}

		}
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
