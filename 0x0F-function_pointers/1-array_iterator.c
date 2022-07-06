#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - call action for each array value
 *
 * @array: array of int
 * @size: array size
 * @action: callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
