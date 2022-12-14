#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase
 *	followed by a new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int ab;

	for (ab = 'a'; ab <= 'z'; ab++)
		_putchar(ab);
	_putchar('\n');
}
