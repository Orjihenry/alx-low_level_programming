#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 *
 * Return: Always 0
 */

void times_table(void)
{
	int ch, ab, b;

	for (ch = 0; ch <= 9; ++ch)
	{
		_putchar(48);
		for (ab = 1; ab <= 9; ++ab)
		{
			_putchar(',');
			_putchar(' ');

			b = ch * ab;

			if (b <= 9)
				_putchar(' ');
			else
				_putchar((b / 10) + 48);

			_putchar((b % 10) + 48);
		}
		_putchar('\n');
	}
}
