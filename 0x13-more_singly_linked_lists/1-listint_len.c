#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - return number of element in a list
 *
 * @h: head
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + listint_len(h->next));
}
