#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	time_t t;

	srand(time(&t));
	int n = rand();

	printf("%d", n);
	if (n > 0)
		printf(" is positive\n");
	if (n < 0)
		printf(" is negative\n");
	if (n == 0)
		printf(" is zero\n");

	return (0);
}
