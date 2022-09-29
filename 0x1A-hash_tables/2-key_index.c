#include "hash_tables.h"

/**
 * @brief 
 * 
 * @param key 
 * @param size 
 * @return unsigned long int 
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) / size);
}
