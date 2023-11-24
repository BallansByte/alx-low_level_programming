#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: Success
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *byte_ptr = (char *)&check;

	return ((*byte_ptr == 1) ? 1 : 0);
}
