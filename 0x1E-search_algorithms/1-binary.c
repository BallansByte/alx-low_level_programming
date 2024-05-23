#include "search_algos.h"
/**
 * binary_search - performs binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int main(void)
{
    int array[] = {10, 20, 30, 40, 50, 60};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 40;
    int result;

    result = binary_search(array, size, value);
    printf("Index of %d: %d\n", value, result);

    return (0);
}
