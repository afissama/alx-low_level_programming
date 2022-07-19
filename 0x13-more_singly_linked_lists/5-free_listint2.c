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
	if ((*head) != NULL)
	{
		free_listint2(&((*head)->next));
	}
	free(*head);
	*head = NULL;
}
