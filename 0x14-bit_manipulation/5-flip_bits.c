#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need to flip
 *		to get from one number to another.
 *
 * @n: first parameter
 * @m: second parameter
 *
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int num;
	unsigned long int bits = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		num = bits >> a;
		if (num & 1)
			count++;
	}

	return (count);
}
