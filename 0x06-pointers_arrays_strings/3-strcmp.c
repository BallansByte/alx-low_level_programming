#include "main.h"
/**
 * _strcmp - Comparisons
 * @s1: The first string
 * @s2: The second string
 * Return: 0 success
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
		{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
		}
	if (s1[i] == '\0' && s2[i] != '\0')
	{
		return (-s2[i]);
	}
	else if (s1[i] != '\0' && s2[i] == '\0')
	{
		return (s1[i]);
	}

	return (0);
}
