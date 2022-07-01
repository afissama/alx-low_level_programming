#include <stdio.h>
#include <stdlib.h>

int _strlen_recursion(char *s);
/**
 * string_nconcat - concatenation of s1 s2
 *
 * @s1: char *
 * @s2: char *
 * @n: int
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, _pos, _n, _glob_pos;
	char *concat;

	len = _strlen_recursion(s1) + n;
	concat = malloc(len * sizeof(char) + 1);
	_pos = 0, _n = 0, _glob_pos = 0;
	if (concat == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		while (s1[_pos])
		{
			concat[_glob_pos] = s1[_pos];
			_pos++;
			_glob_pos++;
		}
	}
	_pos = 0;
	if (s2 != NULL)
	{
		_n = n;
		if (_n > _strlen_recursion(s2))
		{
			_n = _strlen_recursion(s2);
		}
		while (s2[_pos] && _pos < _n)
		{
			concat[_glob_pos] = s2[_pos];
			_pos++;
			_glob_pos++;
		}
	}
	concat[_glob_pos] = '\0';
	return (concat);
}

/**
 * _strlen_recursion - return the length of parsing param
 * @s: string passing pointer
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0' || s == NULL)
	{
		return (0);
	}
	return (1 + _strlen_recursion(&s[1]));

}
