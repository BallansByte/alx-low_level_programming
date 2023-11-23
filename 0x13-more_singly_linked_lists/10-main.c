#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head;
head = head->next;
free(temp);
}
}

int main(void)
{
listint_t *head = NULL;
unsigned int index_to_delete = 2;
int result = delete_nodeint_at_index(&head, index_to_delete);

add_nodeint(&head, 1);
add_nodeint(&head, 2);
add_nodeint(&head, 3);
add_nodeint(&head, 4);

printf("Original list:\n");
print_listint(head);

if (result == 1)
{
printf("\nNode at index %u deleted successfully.\n", index_to_delete);
printf("Updated list:\n");
print_listint(head);
}
else if (result == -1)
{
printf("\nError: The list is empty or head is NULL.\n");
}
else if (result == -10)
{
printf("\nError: Index out of range.\n");
}

free_listint(head);

return (0);
}
