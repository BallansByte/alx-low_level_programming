#include "main.h"
/**
 * is_separator - Capitalize each word
 * @c: The character to check*
 * Return: 1, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (separators[i] != '\0')
	{
	if (c == separators[i])
		return (1);
	i++;
	}
	return (0);
}
/**
 * cap_string - Capitalize all words in a string
 * @str: The input string to be modified
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	str[0] -= 32;

	while (str[i] != '\0')
	{
	if (is_separator(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
	str[i + 1] -= 32;

	i++;
	}

	return (str);
}
