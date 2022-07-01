#include <stdio.h>
#include <stdlib.h>

/**
 *  array_range - create arrange array from min to max
 *
 * @min: int
 * @max: int
 * Return: int*
 */
int *array_range(int min, int max)
{
	int *arr;
	int to_allocate, i;

	to_allocate = max - min;
	if (to_allocate < 0)
	{
		return (NULL);
	}

	arr = malloc((to_allocate + 1) * sizeof(int));
	i = min;
	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}
	return (arr);
}
