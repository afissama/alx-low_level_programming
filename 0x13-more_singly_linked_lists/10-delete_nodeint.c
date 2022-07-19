#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - delete node at index
 *
 * @head: list head
 * @index: element index
 * Return: (-1 if failed 1 if not) int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t **temp_head, *to_rm;

	temp_head = head;
	while (index--)
	{
		if ((*temp_head) == NULL)
		{
			return (-1);
		}
		temp_head = &((*temp_head)->next);
	}
	to_rm = (*temp_head);
	if ((*temp_head) == NULL)
	{
		return (-1);
	}
	(*temp_head) = (*temp_head)->next;
	free(to_rm);
	return (1);
}
