#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to be initialized
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This function initializes the members of a struct dog with
 * the provided values. It checks if the pointer is not NULL before
 * attempting to dereference it.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
