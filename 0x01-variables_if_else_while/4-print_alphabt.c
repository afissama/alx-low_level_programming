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

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i != 'Q' && i != 'E')
		{
			putchar(tolower(i));
		}
	}
	putchar('\n');
	return (0);
}
