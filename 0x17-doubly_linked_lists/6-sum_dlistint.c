#include "lists.h"
/**
 * sum_dlistint - sum all number in the list
 *
 * @head: node root
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
