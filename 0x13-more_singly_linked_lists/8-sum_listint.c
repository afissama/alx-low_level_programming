#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - sum all n of the list
 *
 * @head: head of list
 * Return: element sum in int
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}
	return (head->n + sum_listint(head->next));
}
