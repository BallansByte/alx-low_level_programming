#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 * Description: This function takes a pointer to a string and reverses it.
 */
void rev_string(char *s)
{
	char temp;
	int i, j;
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Swap characters to reverse the string */
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
