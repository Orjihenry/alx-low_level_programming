#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 *
 * @name: name parameter
 * @f: pointer to the printing function
 *
 * Return: Success 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	
	f(name);
}
