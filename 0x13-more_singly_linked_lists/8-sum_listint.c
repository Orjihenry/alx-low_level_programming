#include "lists.h"

/**
 * sum_listint - Function that calculates the sum of all the data
 *		in a listint_t list.
 *
 * @head: first parameter in linked list
 *
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
