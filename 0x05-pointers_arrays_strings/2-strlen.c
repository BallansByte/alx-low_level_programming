#include "main.h"
/**
 * _strlen - Returns string length..
 * @s: A pointer to the string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
