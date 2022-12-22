#include "main.h"

/**
 * print_number - Program that Prints an integer.
 *
 *
 * @n: The integer to print.
 *
 * Return: Success 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	print_uint((unsigned int) n);
}

/**
 * print_uint - Program that Prints an unsigned integer.
 *
 * @n: The unsigned int to print.
 *
 * Return: Success 0
 */

void print_uint(unsigned int n)
{
	if (n / 10 != 0)
		print_uint(n / 10);
	_putchar(n % 10 + '0');
}
