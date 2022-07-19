#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - remove the head node (first elem) of list
 *
 * @head: list head
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int temp_n;

	if ((*head) == NULL)
	{
		return (0);
	}
	temp = (*head);
	temp_n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (temp_n);
}
