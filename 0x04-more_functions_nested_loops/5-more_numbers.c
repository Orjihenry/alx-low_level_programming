#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 *		followed by a new line.
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		_putchar("%d", i * 10);
	}
	_putchar(10);
}
