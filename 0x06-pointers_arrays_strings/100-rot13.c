#include <stdio.h>

/**
 * rot13 - code the given string to rot13
 * @str: The string
 *
 * Return: rot13 coding string
 */
char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char src[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
	'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
	'x', 'y', 'z', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	'X', 'Y', 'Z'
	};

	while (str[i])
	{

		for (j = 0; j < 52; j++)
		{
			if (str[i] == src[j])
			{
				str[i] = src[((j + 26) % 52)];
				break;
			}
		}
		i++;
	}
	return (str);
}
