#include "lists.h"

/**
 * free_dlistint - completely sets frees and empties dlistint_t list.
 * @head: points to the head of the list
 * Return: always success
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
