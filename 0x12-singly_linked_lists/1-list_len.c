#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return list size
 *
 * @h: header of list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + list_len(h->next));
}
