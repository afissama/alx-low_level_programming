#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - writes the alphabet
 * @c: The character to check
 *
 * Return: 1 if is lowerCase 0 otherwise
 */
int _islower(int c)
{
	if (c == tolower(c))
	{
		return (1);
	}
	return (0);
}
