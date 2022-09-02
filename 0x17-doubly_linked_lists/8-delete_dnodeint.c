#include "lists.h"
/**
 * delete_dnodeint_at_index - delete nodeint at index
 *
 * @head: root node of list
 * @index: index of pos
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t **tmp;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = head;
	while (index--)
	{
		if (*tmp == NULL)
			return (-1);
		tmp = &(*tmp)->next;
	}
	if (*tmp == NULL)
		return (-1);
	(*tmp) = (*tmp)->next;
	return (1);
}