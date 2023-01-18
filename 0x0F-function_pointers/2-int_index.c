#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 *
 * @array: paramter to search in
 * @size: array size
 * @cmp: function comparison
 *
 * Return: Success 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}

	return (-1);
}
