#include "main.h"

/**
 * _islower -  Prints 10 times the alphabet, in lowercase
 *		followed by a new line.
 *
 * @c: parameter to be checked
 *
 * Return: 1 or 0
 */

int int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);

}
