#include "hash_tables.h"

/**
 * hash_table_print - print an hash table
 *
 * @ht: hash pointer
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int pos, isfirst;

	if (ht == NULL)
		exit(0);

	isfirst = 0;
	printf("{");
	for (pos = 0; pos < ht->size; pos++)
	{
		tmp = ht->array[pos];
		while (tmp != NULL)
		{
			if (isfirst)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			isfirst = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
