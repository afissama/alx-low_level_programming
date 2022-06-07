#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9 ; i++)
	{
		print_alphabet();
	}
}

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
