#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a node to the list head
 *
 * @head: head of list
 * @str: str to add
 * Return: list_t*
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t *));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = (*head);
	(*head) = temp;
	return (temp);
}
