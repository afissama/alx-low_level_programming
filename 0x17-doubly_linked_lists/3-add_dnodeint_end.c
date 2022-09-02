#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of the list
 *
 * @head: list root node
 * @n: number
 * Return: dlistint_t*
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t **temp, *tmp_head;

	if (head == NULL)
	{
		return (NULL);
	}

	if (*head == NULL || (*head)->next == NULL)
	{

		tmp_head = *head;
		temp = head;
		if (*head != NULL)
		{
			temp = &(*head)->next;
		}
		(*temp) = malloc(sizeof(dlistint_t *));
		if (*temp == NULL)
			return (NULL);
		(*temp)->n = n;
		(*temp)->next = NULL;
		(*temp)->prev = tmp_head;
		return (*temp);
	}

	return (add_dnodeint_end(&(*head)->next, n));
}
