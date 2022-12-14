#include "main.h"

/**
 * _isalpha - Check for alphabetic character.
 *
 * @c: a character to be checked
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
