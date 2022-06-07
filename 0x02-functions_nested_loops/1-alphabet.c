#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * print_alphabet - writes the alphabet
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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