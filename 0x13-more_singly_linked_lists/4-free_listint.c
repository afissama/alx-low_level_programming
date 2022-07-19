#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - free a list
 *
 * @head: list head
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
	}
	free(head);
}
