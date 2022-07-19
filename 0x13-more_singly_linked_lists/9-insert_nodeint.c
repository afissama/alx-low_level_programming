#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert node at index
 *
 * @head: list head
 * @idx: index
 * @n: param for new node
 * Return: listint_t*
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t **head_tmp, *new_node, *temp_next;

	head_tmp = head;
	while (idx--)
	{
		if ((*head_tmp) == NULL)
			return (NULL);

		head_tmp = &((*head_tmp)->next);
	}
	new_node = malloc(sizeof(listint_t *));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	temp_next = (*head_tmp);
	*head_tmp = new_node;
	new_node->next = temp_next;

	return (new_node);
}
