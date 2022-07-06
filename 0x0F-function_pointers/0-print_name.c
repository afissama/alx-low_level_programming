#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - print given name using pointer funct
 *
 * @name: char *
 * @f: function used to prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}

}
