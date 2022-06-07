#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int low;

	for (i = 'Z'; i >= 'A'; i--)
	{
		low = tolower(i);
		putchar(low);
	}
	putchar('\n');
	return (0);
}
