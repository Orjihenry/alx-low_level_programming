#include "main.h"

/**
 * print_numbers - rints the numbers, from 0 to 9,
 *			followed by a new line.
 *
 *
 * Return: 0
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n = n + 1)
	{
		_putchar("%d\n", n);
	}
	return (0);
}
