#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - writes the alphabet
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		_putchar(tolower(i));
	}
	_putchar('\n');
}
