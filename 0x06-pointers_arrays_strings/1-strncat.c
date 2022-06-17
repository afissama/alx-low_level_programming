#include <stdio.h>

/**
 * _strncat - check the code
 * @dest: char tab representing the destination
 * @src: char tab representing the source
 * @n: number of byte to read in src
 *
 * Return: char tab
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	while ((j < n) && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
