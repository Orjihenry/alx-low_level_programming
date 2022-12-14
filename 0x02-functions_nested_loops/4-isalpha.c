#include "nain.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 *
 * Return: 1 or 0
 */

int _isalpha(void)
{
	if (c > 64 && c < 91 && c >= 97
			&& c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
