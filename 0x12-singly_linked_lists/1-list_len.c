#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list.
 *
 * @h: parameter for list_t
 *
 * Return: Count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
