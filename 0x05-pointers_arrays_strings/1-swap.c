#include "main.h"
#include <stddef.h>
/**
 * swap_int - Swaps the values of integers.
 * @a: A pointer to integer1.
 * @b: A pointer to integer2.
 *
 * Description: This function swaps values.
 */
void swap_int(int *a, int *b)
{
	int temp;

	if (a != NULL && b != NULL)
	{

		temp = *a;
		*a = *b;
		*b = temp;
	}
}
