#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * print_rev - Prints a string in reverse followed by a newline.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = _strlen(s);

	if (length == 0)
	{
		printf("\n");
		return;
	}

	while (length >= 0)
	{
		putchar(s[length]);
		length--;
	}

	putchar('\n');
}
