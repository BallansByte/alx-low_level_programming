#include "main.h"
/**
 * leet - Encode a string
 * @str: The input
*Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char leet_map[5] = {'a', 'e', 'o', 't', 'l'};
	char leet_replace[5] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 5; j++)
	{
	if (str[i] == leet_map[j] || str[i] == leet_map[j] - 32)
	{
	str[i] = leet_replace[j];
	break;
	}
	}
	}

	return (str);
}
