#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a linked list,
 *			and returns the head node’s data (n).
 *
 * @head: first element of linked list
 *
 * Return: data or 0 (ifempty)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
