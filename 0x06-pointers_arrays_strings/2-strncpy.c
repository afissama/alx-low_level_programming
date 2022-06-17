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
	int j = 0;

	while ((j < n) && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	if (src[j] == '\0')
	{
		dest[j] = '\0';
	}
	return (dest);
}
