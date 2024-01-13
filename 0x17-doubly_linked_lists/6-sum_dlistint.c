#include "lists.h"

/**
 * sum_dlistint - sums up all the data and returns it(n), this is
 * of a doubly linked list
 *
 * @head: list head
 * Return: Always Success
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
