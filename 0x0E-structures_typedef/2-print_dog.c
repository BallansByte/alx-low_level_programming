#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: This function prints the details of a struct dog,
 * including its name, age, and owner. If any element is NULL,
 * it prints "(nil)" in its place. If the struct dog pointer is NULL,
 * nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.2f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
