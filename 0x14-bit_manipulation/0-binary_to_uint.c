#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to unsigned int.
 *
 * @b: parameter for binary number.
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		num = 2 * num + (b[n] - '0');
	}

	return (num);
}
