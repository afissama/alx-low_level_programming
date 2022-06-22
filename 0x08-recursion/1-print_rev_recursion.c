#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_print_rev_recursion - Prints a string
 *
 *@s: char*
 */
void _print_rev_recursion(char *s)
{
	if (s[0])
	{
		if (s[1])
		{
			_print_rev_recursion(&s[1]);
		}
		_putchar(s[0]);
	}
}
