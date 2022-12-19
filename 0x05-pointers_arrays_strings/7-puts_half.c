#include "main.h"

/**
 * puts_half - Program that prints half of a string,
 *		followed by a new line.
 *
 * @str: string to be printed.
 *
 * Return: Success 0
 */

void puts_half(char *str)
{
	int n = 0, a, i;

	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 0)
	{
		for (i = n / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (n % 2)
	{
		for (a = (n - 1) / 2; n < n - 1; a++)
		{
			_putchar(str[a + 1]);
		}
	}
	_putchar(10);
}
