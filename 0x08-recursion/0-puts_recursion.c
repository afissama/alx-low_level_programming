#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_puts_recursion - Prints a string
 *
 *@s: char*
 */
void _puts_recursion(char *s)
{
	if (s[0])
	{
		_putchar(s[0]);
		if (s[1])
		{
			_puts_recursion(&s[1]);
		}
		else
		{
			_putchar('\n');
		}
	}
}
