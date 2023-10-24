#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string.
 * @s: The string.
 * @accept: The set of bytes.
 *
 * Return: success 0..
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
