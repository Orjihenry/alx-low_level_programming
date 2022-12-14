#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 *	starting from 00:00 to 23:59.
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int r, s;

	r = 0;

	while (r < 24)
	{
		s = 0;
		while (s < 60)
		{
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
			s++;
		}
		r++;
	}
}
