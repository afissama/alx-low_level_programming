#include <stdarg.h>

/**
 * sum_them_all - sum all passed number
 *
 * @n: number of param
 * @...: int params
 * Return: sum of param int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(ptr, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
