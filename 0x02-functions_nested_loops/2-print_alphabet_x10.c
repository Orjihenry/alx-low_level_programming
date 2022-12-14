#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabets
 *
 *
 */

void print_alphabet_x10(void)
{
	int ab;
	int b;

	for (b = 0; b < 10; ++b)
	{
		for (ab = 'a'; ab <= 'z'; ++ab)
		{
			_putchar(ab);
		}
		_putchar(10);
	}
}
