#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - free list
 *
 * @head: list head
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
	}
	free(head);
}
