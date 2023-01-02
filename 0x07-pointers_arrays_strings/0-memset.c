#include "main.h"

/**
 * _memset - A function that fills the memory with a constant byte.
 *
 * @s: memory area to be filled.
 * @b: parameter to copy
 * @n: parameter that determines number of lines to be copied.
 *
 * Return: Success 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
