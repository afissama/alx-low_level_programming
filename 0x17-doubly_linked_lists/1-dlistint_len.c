#include "lists.h"
/**
 * dlistint_len - return number of node
 *
 * @h: doubled linked list
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + dlistint_len(h->next));
}
