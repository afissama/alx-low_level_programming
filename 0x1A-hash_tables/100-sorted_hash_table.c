#include "hash_tables.h"

/**
 * shash_table_create - create an shash_table
 *
 * @size: shashtable size
 * Return: shashtable
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *s_hashtable;

	s_hashtable = malloc(sizeof(shash_table_t));
	if (s_hashtable == NULL)
		return (NULL);

	s_hashtable->size = size;
	s_hashtable->array = malloc(sizeof(shash_node_t *) * size);
	if (s_hashtable->array == NULL)
		return (NULL);

	s_hashtable->shead = NULL;
	s_hashtable->stail = NULL;

	return (s_hashtable);
}

/**
 * shash_table_set - add or set in hasmap
 *
 * @ht: shashtable pointer
 * @key: key to add
 * @value: value
 * Return: int
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t **curr, *new_node, *iterat, *next_pos;
	unsigned long int key_idx;

	if (ht == NULL)
		return (0);

	key_idx = key_index((const unsigned char *)key, ht->size);
	curr = &ht->array[key_idx];

	while (*curr != NULL)
	{
		if (strcmp((*curr)->key, key) == 0)
		{
			(*curr)->value = (char *) value;
			break;
		}
		curr = &(*curr)->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = ht->array[key_idx];
	ht->array[key_idx] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
		return (1);
	}
	iterat = ht->shead;
	next_pos = NULL;
	add_node_to_double_linked_list(ht, key, new_node, iterat, next_pos);
	return (1);
}


/**
 * add_node_to_double_linked_list - this
 *
 * @ht: head
 * @key: key to get
 * @new_node: Node to add
 * @iterat: iterator
 * @next_pos: position for new node
 * Return: char*
 */
void add_node_to_double_linked_list(shash_table_t *ht, const char *key,
shash_node_t *new_node, shash_node_t *iterat, shash_node_t *next_pos)
{
	
	while (iterat != NULL)
	{
		if (strcmp(lower_str(iterat->key), lower_str((char *)key)) == 0)
		{
			new_node->snext = iterat->snext;
			new_node->sprev = iterat->sprev;

			if (iterat == ht->shead)
			{
				ht->shead = new_node;
			}
			if (iterat == ht->stail)
				ht->stail = new_node;

			iterat = new_node;
			return;
		}
		if (strcmp(lower_str(iterat->key), lower_str((char *)key)) < 0)
		{
			next_pos = iterat;
			iterat = iterat->snext;
			continue;
		}
		break;
	}
	if (next_pos == ht->shead || next_pos == NULL)
	{
		if (ht->shead == NULL)
		{
			new_node->snext = NULL;
			new_node->sprev = NULL;
			ht->shead = new_node;
			return;
		}
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
		return;
	}
	if (next_pos == ht->stail)
	{
		new_node->snext = NULL;
		ht->stail->snext = new_node;
		new_node->sprev = ht->stail;
		ht->stail = new_node;
		return;
	}
	new_node->snext = next_pos->snext;
	new_node->sprev = next_pos;
	next_pos->snext->sprev = new_node;
	next_pos->snext = new_node;
}


char *lower_str(char *str)
{
	int i;
	char *str_cp;

	i = 0;
	str_cp = malloc(sizeof(strlen(str)));
	for(i = 0; str[i]; i++){
		str_cp[i] = tolower(str[i]);
	}
	return (str_cp);
}

/**
 * shash_table_get - get value associated with a key
 *
 * @ht: head
 * @key: key to get
 * Return: char*
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int key_idx;

	if (ht == NULL)
		return (NULL);

	if (key == NULL)
		return NULL;

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

/**
 * shash_table_print - print an hash table
 *
 * @ht: hash pointer
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	unsigned int isfirst;

	if (ht == NULL)
		exit(0);

	printf("{");
	isfirst = 0;
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (isfirst)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		isfirst = 1;
		tmp = tmp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - print an hash table reversly
 *
 * @ht: hash pointer
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	unsigned int isfirst;

	if (ht == NULL)
		exit(0);

	isfirst = 0;
	printf("{");
	tmp = ht->stail;
	while (tmp != NULL)
	{
		if (isfirst)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		isfirst = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete an hashtable
 *
 * @ht: hashMap
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *curr;

	if (ht == NULL)
		exit(0);

	tmp  = ht->shead;

	while (tmp != NULL)
	{
		curr = tmp->snext;
		free(curr);
		tmp = tmp->next;
	}
	free(ht);
}
