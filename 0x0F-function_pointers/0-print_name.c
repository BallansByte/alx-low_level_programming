#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name..
 * @f: A function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	while (*name)
	{
	f(name);
	name++;
	}
	}
}
