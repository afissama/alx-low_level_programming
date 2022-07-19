#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - add new node at the list end
 *
 * @head: head
 * @n: param n
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t **_temp;

	_temp = head;
	while ((*_temp) != NULL)
	{
		_temp = &((*_temp)->next);
	}
	(*_temp) = malloc(sizeof(listint_t *));
	if ((*_temp) == NULL)
	{
		return (NULL);
	}
	(*_temp)->n = (int)n;
	(*_temp)->next = NULL;

	return ((*_temp));
}
