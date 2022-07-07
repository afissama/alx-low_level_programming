#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print given strings
 *
 * @separator: separator
 * @n: number of number
 * @...: list of number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *tmp;

	if (n == 0)
		exit(98);

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(ptr, char*);
		if (tmp == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", tmp);
		}

		if (i != (n - 1))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("\n");
		}
	}
	va_end(ptr);
}
