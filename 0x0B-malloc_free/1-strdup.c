#include <stdio.h>
#include <stdlib.h>
int _strlen_recursion(char *s);
/**
 * _strdup - duplicate string and return duplicat
 *
 * @str: char*
 * Return: char*
 */
char *_strdup(char *str)
{
	int _strlen;
	int pos;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	_strlen = _strlen_recursion(str);
	duplicate = malloc(_strlen * sizeof(char));
	pos = 0;
	if (duplicate != NULL)
	{
		while (str[pos] != '\0')
		{
			duplicate[pos] = str[pos];
			pos++;
		}
		duplicate[pos] = '\0';

		return (duplicate);
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
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(&s[1]));

}
