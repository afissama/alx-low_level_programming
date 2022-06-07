#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

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