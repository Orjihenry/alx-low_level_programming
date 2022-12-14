#include "main.h"

/**
 * _print_sign - Prints sign of a number.
 *
 * @n: Parameter to be checked.
 *
 * Return: -1 or 0 or 1
 */

int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
		return (0);
}
