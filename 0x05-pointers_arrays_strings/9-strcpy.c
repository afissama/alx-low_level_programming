#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy the parsing string
 * @dest: destination param
 * @src: source param
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
