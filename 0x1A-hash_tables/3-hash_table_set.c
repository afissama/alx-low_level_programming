#include "hash_tables.h"

/**
 * hash_table_set - add or set in hasmap
 *
 * @ht: hastable pointer
 * @key: key to add
 * @value: value
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *curr, *new_node;
	unsigned long int key_idx;

	if (ht == NULL)
		return (0);

	key_idx = key_index((const unsigned char *)key, ht->size);

	curr = ht->array[key_idx];

	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			curr->value = (char *)value;
			return (1);
		}
		curr = curr->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = ht->array[key_idx];
	ht->array[key_idx] = new_node;
	return (1);
}
