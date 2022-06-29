#include <stdio.h>
#include <stdlib.h>
/**
 * create_array- Create a array object
 *
 * @size: unsigned int
 * @c: char
 * Return: char*
 */
char *create_array(unsigned int size, char c)
{
	char *temp_tab;

	if (size == 0)
	{
		return (NULL);
	}
	temp_tab = malloc(size * sizeof(char));
	if (temp_tab != NULL)
	{
		while (size--)
		{
			temp_tab[size] = c;
		}
	}

	return (temp_tab);
}
