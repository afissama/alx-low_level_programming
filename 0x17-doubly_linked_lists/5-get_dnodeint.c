#include "lists.h"
/**
 * get_dnodeint_at_index -  Get the dnodeint at index object
 *
 * @head: node root
 * @index: index
 * Return: dlistint_t*
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index == 0)
		return (head);
	if (head == NULL)
		return (NULL);
	return (get_dnodeint_at_index(head->next, index - 1));
}
