#include "main.h"

/**
 * _abs - Prints absolute value of integer
 *
 * @r: Parameter to check
 *
 * Return: Always 0
 */

int _abs(int r)
{
	if (r < 0)
		r = -r;
	return (r);
}
