#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * leet - uppercas the given string words
 * @str: The string
 *
 * Return: 1337 coding string
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char src[5] = {'a', 'e', 'o', 't', 'l'};
	char des[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == src[j] || str[i] == src[j] - ' ')
			{
				str[i] = des[j];
			}
		}
		i++;
	}
	return (str);
}
