#include <stdio.h>
/**
 * _memcpy - copy n character from src to dest
 *
 * @dest: char*
 * @src: char
 * @n: unsigned int
 *Return: char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > i)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
