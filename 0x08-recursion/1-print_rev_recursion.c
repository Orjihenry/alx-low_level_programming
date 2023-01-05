#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse.
 *
 * @s: parameter to be printed in reverse
 *
 * Return: Success 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
