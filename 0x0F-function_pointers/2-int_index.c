#include "function_pointers.h"

/**
 * int_index - Search for an integer.
 * @array: The array.
 * @size: The number.
 * @cmp: A pointer.
 *
 * Return: Success.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
	int i;

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	{
	return (i);
	}
	}
}
	return (-1);
}
