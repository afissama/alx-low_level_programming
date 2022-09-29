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
	unsigned long int key_idx;

	if (ht == NULL)
		return (NULL);

	key_idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[key_idx];

	while (temp != NULL && temp->key != key)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);

	return (temp->value);
}
