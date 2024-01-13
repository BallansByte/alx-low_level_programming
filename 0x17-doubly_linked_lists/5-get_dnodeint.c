#include "lists.h"

/**
 * get_dnodeint_at_index - give us the nth node of a dlistint_t linked list.
 * @head: points to the head of the list
 * @index: index of the node to search, starts from 0
 * Return: always success
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == size)
		return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
