#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - print all params
 *
 * @format: param types
 * @...: params
 */
void print_all(const char * const format, ...)
{
	int i, find, n_len;
	va_list ptr, ptr_cp;

	va_start(ptr, format);
	i = 0, n_len = strlen(format);
	while (format[i])
	{
		find = 1;
		switch (format[i])
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
				}
				printf("%s", va_arg(ptr, char *));
				break;
			default:
				find = 0;
				break;
		} i++;
		if (find == 1 && i != n_len)
		{
			printf(", ");
		}
	} va_end(ptr);
	printf("\n");
}
