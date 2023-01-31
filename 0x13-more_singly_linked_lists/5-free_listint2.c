#include "lists.h"

/**
 * free_listint2 -Function that frees a linked list.
 *
 * @head: pointer to freed list
 * Return: Success 0
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
