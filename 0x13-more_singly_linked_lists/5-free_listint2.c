#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 * @head: Pointer to the head of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;

	if (!head || !*head)
	return;

	current = *head;

	while (current != NULL)
	{
	next_node = current->next;
	free(current);
	current = next_node;
	}

	*head = NULL;
}
