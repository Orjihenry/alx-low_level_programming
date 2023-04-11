#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key.
 *
 * @key: Parameter to the index.
 * @size: Array size of the hash table.
 *
 * Return: The index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
