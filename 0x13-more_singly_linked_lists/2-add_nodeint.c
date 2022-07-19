#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - add new node to the beginning of list
 *
 * @head: head of list
 * @n: param n
 * Return: listint_t*
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t *));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = (int)n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
