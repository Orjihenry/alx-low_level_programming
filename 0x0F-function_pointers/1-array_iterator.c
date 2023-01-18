#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -Program that executes a function given as a parameter
 *			on each element of an array.
 *
 * @array: array to iterate over
 * @size: array size
 * @action: pointer to function
 *
 * Return: Success 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
