#include "hash_tables.h"

/**
 * hash_table_print - print an hash table
 *
 * @ht: hash pointer
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;

	if (ht == NULL)
		exit(0);

	tmp = *(ht->array);
	printf("{");
	while (tmp != NULL)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->next;
		if (tmp != NULL)
			printf(", ");
	}
	printf("}\n");
}
