#include "main.h"
/**
 * string_toupper - Convert lowercase letters
 * @str: The input
 * Return: A pointer to success
 */
char *string_toupper(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
	if (str[s] >= 'a' && str[s] <= 'z')
	{
		str[s] = str[s] - 'a' + 'A';
	}
	s++;
	}

	return (str);
}
