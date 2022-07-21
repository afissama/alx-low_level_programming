#include <stdio.h>
#include <stdlib.h>

int _strlen_recursion(const char *s);
/**
 * binary_to_uint - convert binary to unsigned int
 *
 * @b: binary number in char *
 * Return: the converted number or 0 if fail.
 */
unsigned int binary_to_uint(const char *b)
{
	int pos, _b, len;
	unsigned int numb;

	if (b == NULL)
	{
		return (0);
	}
	numb = 0;
	pos = len = _strlen_recursion(b);

	while (pos--)
	{
		_b = b[pos] - '0';
		if (_b < 0 || _b > 1)
		{
			return (0);
		}
		numb += _b << ((len - 1) - pos);
	}
	return (numb);
}

/**
 * _strlen_recursion - return the length of parsing param
 * @s: string passing pointer
 *
 * Return: length of s
 */
int _strlen_recursion(const char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(&s[1]));

}
