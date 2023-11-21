#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data
 * @head: Pointer to the head of the linked list.
 *
 * Return:Success.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
	sum += current->n;
	current = current->next;
	}

	return (sum);
}
