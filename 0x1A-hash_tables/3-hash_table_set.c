#include "hash_tables.h"

/**
 * hash_table_set -
 *
 * @ht: hastable pointer
 * @key: key to add
 * @value: value
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **temp;
	int may_has_next;

	if (ht == NULL)
		return (0);

	temp = ht->array;
	may_has_next = 1;
	while (*temp != NULL && (*temp)->key != key)
	{
		temp = &(*temp)->next;
	}

	if (*temp == NULL)
	{
		*temp = malloc(sizeof(hash_node_t));
		may_has_next = 0;
	}

	if (*temp == NULL)
		return (0);

	if (may_has_next == 0)
		(*temp)->next = NULL;

	(*temp)->key = (char *)key;
	(*temp)->value = (char *)value;

	return (1);
}
