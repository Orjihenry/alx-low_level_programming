#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: Parameter that determines number of lines
 *	to be drawn.
 *
 * Return: Success 0
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
			_putchar('_');
		_putchar(10);
	}
}
