#include "hash_tables.h"

/**
 * hash_table_delete - delete an hashtable
 *
 * @ht: hashMap
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *curr;

	if (ht == NULL)
		exit(0);

	tmp = *(ht->array);
	while (tmp != NULL)
	{
		curr = tmp;
		free(curr);
		tmp = tmp->next;
	}
	free(ht->array);
	free(ht);
}
