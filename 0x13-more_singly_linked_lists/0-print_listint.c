#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - print the list
 *
 * @h: head
 * Return: list size in size_t
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
