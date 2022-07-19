#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - Get the nodeint at index object
 *
 * @head: head list
 * @index: index elem to return
 * Return: listint_t*
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	temp = head;
	while (index--)
	{
		if (temp != NULL)
		{
			temp = temp->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (temp);
}
