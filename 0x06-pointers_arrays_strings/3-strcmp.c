#include <stdio.h>

/**
 * _strcmp - compare two strings
 * @s1: fisrt string
 * @s2: second string
 *
 * Return: char tab
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (-15);
		}
		if (s1[i] < s2[i])
		{
			return (15);
		}
		i++;
	}
	return (0);
}
