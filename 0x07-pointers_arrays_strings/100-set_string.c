#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char
 *
 * @s: parameter to be set to
 * @to: string to set
 *
 * Return: Success 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
