#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes.
 * @head: Pointer to the head.
 * @index: Index of the node..
 * 
 * Return:Success..
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (!head || !*head)
	return (-1);

	current = *head;

	if (index == 0)
	{
	*head = current->next;
	free(current);
	return (1);
	}

	for (i = 0; i < index - 1 && current != NULL; i++)
	{
	current = current->next;
	}
	if (current == NULL || (i == index - 1 && current->next == NULL))
	{
	return (-10);
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
