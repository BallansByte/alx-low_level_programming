#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character
 * @c: The character
 * Return: On success, 1; on error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen_recursion - Calculates the length
 * @s: The string to calculate the length of
 *
 * Return: Success.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
