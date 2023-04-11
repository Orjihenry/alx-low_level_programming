#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 *
 * @str: The string to hash.
 *
 * Return: Success (0).
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashNum;
	int size;

	hashNum = 5381;
	while ((size = *str++))
		hashNum = ((hashNum << 5) + hashNum) + size;

	return (hashNum);
}
