#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements in the list.
A
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
	h = h->next;
	element_count++;
	}
	return (element_count);
}
