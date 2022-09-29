#include "hash_tables.h"

/**
 * hash_table_get - get value associated with a key
 *
 * @ht: head
 * @key: key to get
 * Return: char*
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	temp = *(ht->array);

	while (temp != NULL && temp->key != key)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);

	return (temp->value);
}
