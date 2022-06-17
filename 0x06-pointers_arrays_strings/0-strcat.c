#include <stdio.h>

/**
 * _strcat - check the code
 * @dest: char tab representing the destination
 * @src: char tab representing the source
 *
 * Return: char tab
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
