#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: A pointer to a string.
 * Description: This function calculates the length of the string and prints.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int n;

	while (str[length] != '\0')
		length++;

	n = (length + 1) / 2;

	for (i = n; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
