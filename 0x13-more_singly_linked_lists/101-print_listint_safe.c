#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head.
 * Return: The number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow_ptr, *fast_ptr;
size_t count = 0;

if (head == NULL)
exit(98);

slow_ptr = fast_ptr = head;

while (fast_ptr != NULL && fast_ptr->next != NULL)
{
printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
count++;
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next->next;

	if (slow_ptr == fast_ptr)
	{
	printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
	break;
	}
	}

return (count);
}
