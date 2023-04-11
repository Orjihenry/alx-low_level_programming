#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 *
 * @ht: Pointer to the hash table.
 * @key: Key to add - can not be an empty string.
 * @value: Value associated with key.
 *
 * Return: Error (0) or Success (1).
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *a;
	char *value_copy;
	unsigned long int index, n;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (n = index; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = value_copy;
			return (1);
		}
	}

	a = malloc(sizeof(hash_node_t));
	if (a == NULL)
	{
		free(value_copy);
		return (0);
	}
	a->key = strdup(key);
	if (a->key == NULL)
	{
		free(new);
		return (0);
	}
	a->value = value_copy;
	a->next = ht->array[index];
	ht->array[index] = a;

	return (1);
}
