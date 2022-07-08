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
	va_list ptr, ptr_copy;
	char *tmp;

	if (n != 0)
	{
		va_start(ptr, n);
		for (i = 0; i < n; i++)
		{
			va_copy(ptr_copy, ptr);
			tmp = (void *)va_arg(ptr_copy, char*);
			if (tmp == NULL)
			{
				printf("(nil)");
				va_arg(ptr, char*);
			}
			else
			{
				printf("%s", va_arg(ptr, char*));
			}

			if (i != (n - 1))
			{
				if (separator != NULL)
					printf("%s", separator);
			}
		}
		va_end(ptr);
		printf("\n");
	}
}
