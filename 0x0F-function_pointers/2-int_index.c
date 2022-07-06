#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - searches for an integer
 *
 * @array: elements array
 * @size: array size
 * @cmp: comparasion funct
 * Return: index of result, if not -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
