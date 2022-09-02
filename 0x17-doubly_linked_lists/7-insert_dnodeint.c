#include "lists.h"
/**
 * insert_dnodeint_at_index - insert nodeint at index
 *
 * @h: head
 * @idx: index
 * @n: int
 * Return: dlistint_t*
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t **tmp, *tmp_prev, *new_node;

	if (h == NULL)
		return (NULL);

	tmp = h;
	tmp_prev = NULL;
	while (idx--)
	{
		if (*tmp == NULL)
			return (NULL);
		tmp_prev = *tmp;
		tmp = &(*tmp)->next;
	}
	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = tmp_prev;
	new_node->next = *tmp;
	*tmp = new_node;
	return (new_node);
}
