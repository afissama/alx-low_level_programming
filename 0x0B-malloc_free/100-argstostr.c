#include <stdio.h>
#include <stdlib.h>

int _strlen_recursion(char *s);
int _strlen_2D(char **s, int size);
/**
 * argstostr - convert args to str
 *
 * @ac: int
 * @av: int
 * Return: char*
 */
char *argstostr(int ac, char **av)
{
	int _i, _j, _k, _size;
	char *_ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	_size = _strlen_2D(av, ac);
	_ptr = malloc(_size * sizeof(char) + ac);
	_k = 0;
	if (_ptr != NULL)
	{
		for (_i = 0; _i < ac; _i++)
		{
			_j = 0;
			while (av[_i][_j])
			{
				_ptr[_k] = av[_i][_j];
				_k++;
				_j++;
			}
			_ptr[_k] = '\n';
			_k++;
		}
		return (_ptr);
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

/**
 * _strlen_2D - return the length of 2D array
 * @s: string tab passing pointer
 * @size: int
 *
 * Return: length of s
 */
int _strlen_2D(char **s, int size)
{
	int i, _sz;

	i = 0;
	_sz = 0;
	for (i = 0; i < size; i++)
	{
		_sz += _strlen_recursion(s[i]);
	}
	return (_sz);
}
