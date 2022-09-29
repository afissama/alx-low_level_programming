#include "hash_tables.h"

/**
 * key_index - return index of hashmap based on its key
 *
 * @key: the key
 * @size: has map size
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
