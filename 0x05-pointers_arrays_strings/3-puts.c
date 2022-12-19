#include "main.h"

/**
 * _puts - Program thet prints a string to stdout.
 *
 * @str: Parameter to the string to print (pointer).
 *
 * Return: Success 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar(10);
}
