#include "lists.h"

/**
 * free_list - Function that frees a linked list.
 *
 * @head: list_t list to be freed
 *
 * Return: Success 0
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
