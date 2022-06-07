#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text_[] = "_putchar";
	int pos = 0;

	for (pos = 0; pos <= 7; pos++)
	{
		_putchar(text_[pos]);
	}
	_putchar('\n');
	return (0);
}
