#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a newline.
 * @s: The string to be reversed and printed.
 *
 * Description: This function takes a string as input and prints the characters
 * of the string in reverse order, followed by a newline character.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
