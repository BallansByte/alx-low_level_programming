#include "function_pointers.h"

/**
 * array_iterator - Execute a function.
 * @array: The array to be processed.
 * @size: The size of the array.
 * @action: A pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
	size_t i;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}
}
