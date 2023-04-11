#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 *
 * @size: The size of the array
 *
 * Return: NULL (if error occurs) or Pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned long int n;

	hash_table_created = malloc(sizeof(hash_table_t));

	if (hash_table_created == NULL)
		return (NULL);

	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_created->array == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		hash_table_created->array[n] = NULL;
	}

	return (hash_table_created);
}
