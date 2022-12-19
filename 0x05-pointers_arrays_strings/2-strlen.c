#include "main.h"

/**
 * _strlen - Program that returns the length of a string.
 *
 * @s: Parameterg to evaluate.
 *
 * Return: Success 0
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
