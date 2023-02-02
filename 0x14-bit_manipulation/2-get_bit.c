#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 *
 * @n: pointer to find
 * @index: pointer to index
 *
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
