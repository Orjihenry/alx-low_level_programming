#include "lists.h"

/**
 * add_nodeint_end - Program that adds a node at the end of a linked list.
 *
 * @head: pointer to first element
 * @n: parameter for new element
 *
 * Return: Success or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
