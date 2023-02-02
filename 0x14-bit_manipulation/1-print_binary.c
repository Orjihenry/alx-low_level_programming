#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 *
 * @n: binary parameter
 *
 * Return: Success
 */

void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int num;

	for (a = 63; a >= 0; a--)
	{
		num = n >> a;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
