#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - free list
 *
 * @head: list head
 */
void free_listint2(listint_t **head)
{
	listint_t **temp;

	temp = head;
	while ((*temp) != NULL)
	{
		head = temp;
		temp = &((*temp)->next);
		free(*head);
	}
	(*head) = NULL;
}
