#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - add node at the end of list
 *
 * @head: list head
 * @str: str to add
 * Return: list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t **tail;

	tail = head;
	while ((*tail) != NULL)
	{
		tail = &((*tail)->next);
	}
	(*tail) = malloc(sizeof(list_t *));
	if ((*tail) == NULL)
	{
		return (NULL);
	}
	(*tail)->str = strdup(str);
	(*tail)->len = strlen(str);
	(*tail)->next = NULL;

	return (*tail);
}
