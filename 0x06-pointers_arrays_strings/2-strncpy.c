#include <stdio.h>

/**
 * _strncpy - check the code
 * @dest: char tab representing the destination
 * @src: char tab representing the source
 * @n: number of byte to read in src
 *
 * Return: char tab
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
