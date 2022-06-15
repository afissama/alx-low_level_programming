#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _atoi - convert to int
 * @s: string as param
 *
 * Return: pointer to dest
 */
int _atoi(char *s)
{
	int number = 0;
	int pos = 0;
	int nb_size = get_number_size(s);
	int i = 0;
	int _sign = 1;
	int _size = _strlen(s);
	int get_int;

	for (i = 0; i < _size; i++)
	{
		if ((s[i] >= 48 && s[i] <= 57))
		{
			get_int = (s[i] - '0');
			if (number >= INT_MAX - get_int)
			{
				if (_sign > 0)
				{
					number = INT_MAX;
					break;
				}
				number = INT_MIN;
				break;
			}
			number = number + (get_int * (_pow(10, nb_size - pos - 1)));
			pos++;
		}
		else
		{
			if (pos != 0)
			{
				number = _sign * number;
				break;
			}
		}
		if (s[i] == '-')
		{
			_sign *= -1;
		}
	}
	return (number);
}

/**
 * get_number_size - get the possible number length
 * @s: string as param
 *
 * Return: possible size
 */
int get_number_size(char *s)
{
	int _size = _strlen(s);
	int i = 0;
	int nb_size = 0;

	for (i = 0; i < _size; i++)
	{
		if ((s[i] >= 48 && s[i] <= 57))
		{
			nb_size++;
		}
		else
		{
			if (nb_size != 0)
			{
				break;
			}

		}
	}
	return (nb_size);
}

/**
 * _strlen - return the length of parsing param
 * @s: string passing pointer
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

/**
 * _pow - return n power p
 * @n: string passing pointer
 * @p: string passing pointer
 *
 * Return: integer
 */
int _pow(int n, int p)
{
	int _p = p;
	int result = 1;

	while (_p != 0)
	{
		result *= n;
		--_p;
	}

	return (result);
}
