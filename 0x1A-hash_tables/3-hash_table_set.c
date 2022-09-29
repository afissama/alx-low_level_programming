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
	hash_node_t *curr;
	unsigned long int key_idx;

	if (ht == NULL)
		return (0);

	key_idx = key_index((const unsigned char *)key, ht->size);

	curr = ht->array[key_idx];

	while (curr)
	{
		if (curr->key == key)
		{
			curr->value = (char *)value;
			return (1);
		}
		curr = curr->next;
	}

	ht->array[key_idx] = malloc(sizeof(hash_node_t));

	if (ht->array[key_idx] == NULL)
		return (0);

	ht->array[key_idx]->key = (char *)key;
	ht->array[key_idx]->value = (char *)value;

	return (1);
}
