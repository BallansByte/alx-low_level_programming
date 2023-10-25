#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Calculate and print sum
 * @a: Pointer
 * @size: Size
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("Sum of primary diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}
