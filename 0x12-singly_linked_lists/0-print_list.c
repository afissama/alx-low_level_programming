#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - print given list
 *
 * @h: the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int len;

	len = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0]");
			printf("(nil)\n");
		}
		else
		{
			printf("[%d]", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		len++;
	}
	return (len);
}
