#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

void print_int_char_float(char formt, va_list ptr);
/**
 * print_all - print all params
 *
 * @format: param types
 * @...: params
 */
void print_all(const char * const format, ...)
{
	int i, find, n_len;
	va_list ptr;

	if (format != NULL)
	{
		va_start(ptr, format);
		i = 0, n_len = strlen(format);
		while (format[i])
		{
			find = 1;
			switch (format[i])
			{
				case 'c':
				case 'i':
				case 'f':
				case 's':
					print_int_char_float(format[i], ptr);
					break;
				default:
					find = 0;
					break;
			}
			i++;
			while (find == 1 && i != n_len)
			{
				printf(", ");
				break;
			}
		}
		va_end(ptr);
	}
	printf("\n");
}

/**
 * print_int_char_float - print int char and float
 *
 * @formt: char
 * @ptr: va list
 */
void print_int_char_float(char formt, va_list ptr)
{
	va_list ptr_cp;

	switch (formt)
	{
		case 'c':
			printf("%c", va_arg(ptr, int));
			break;
		case 'i':
			printf("%d", va_arg(ptr, int));
			break;
		case 'f':
			printf("%f", va_arg(ptr, double));
			break;
		case 's':
			va_copy(ptr_cp, ptr);
			if ((void *)va_arg(ptr_cp, char *) == NULL)
			{
				printf("(nil)");
				va_arg(ptr, char *);
				break;
			} printf("%s", va_arg(ptr, char *));
			break;
		default:
			break;
	}
}
