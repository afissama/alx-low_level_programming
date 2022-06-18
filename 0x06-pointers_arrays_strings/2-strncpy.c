#include <stdio.h>

/**
 * _strncpy - copy src to dest
 * @dest: char tab representing the destination
 * @src: char tab representing the source
 * @n: number of byte to read in src
 *
 * Return: char tab
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n-- && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ptr);
}
