#include "lists.h"

/**
 * dlistint_len - give back the  the number of elements in
 *  double linked list
 *
 * @h: this is the head of the list
 * Return: alaways success.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
