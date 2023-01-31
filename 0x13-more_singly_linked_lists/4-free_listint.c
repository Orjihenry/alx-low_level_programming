#include "lists.h"

/**
 * free_listint - Program that frees a linked list.
 *
 * @head: parameter to be freed
 *
 * Return: Success 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
