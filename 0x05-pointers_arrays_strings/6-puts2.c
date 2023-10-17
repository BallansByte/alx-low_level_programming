#include "main.h"
#include <stdio.h>
/**
* puts2 - ther character of a string, starting with the first character,
 *         followed by a new line.
 * @str: A pointer to the input string.
 *
 * Description: This function iterates through the string and prints..
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}
