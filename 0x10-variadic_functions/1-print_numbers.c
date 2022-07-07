#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print given numbers
 *
 * @separator: separator
 * @n: number of number
 * @...: list of number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n == 0)
		exit(98);

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
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
