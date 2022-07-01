#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory and set to 0
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *temp;
	unsigned int _tot_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	temp = ptr;
	_tot_size = nmemb * size;
	while (_tot_size--)
	{
		*temp++ = 0;
	}
	return (ptr);
}
