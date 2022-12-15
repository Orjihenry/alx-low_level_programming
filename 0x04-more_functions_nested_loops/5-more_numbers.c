#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 *		followed by a new line.
 *
 * Return: 0
 */

oid more_numbers(void)
{
	int n, ch;

	for (n = 0; n < 10; n++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
				_putchar(j / 10 + '0');
			_putchar(ch % 10 + '0');
		}
		_putchar(10);
	}
}
