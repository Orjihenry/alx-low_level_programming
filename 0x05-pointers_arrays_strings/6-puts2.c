#include "main.h"

/**
 * puts2 - Program that prints one char out of 2 of a string.
 *		followed by a new line
 *
 * @str: Parameter to print the chars from.
 *
 * Return: Success 0
 */

void puts2(char *str)
{
	int n = 0, i;

	while (str[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar(10);
}
