#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 *		followed by a new line.
 *
 * Return: 0
 */

void more_numbers(void)
{
	int n = 0;

	do {
		_putchar((n + 48) * 10);
		n++;
	} while (n >= 0 && n <= 14);
	_putchar(10);
}
