#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 *
 * @s: parameter to calculate the length of
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
