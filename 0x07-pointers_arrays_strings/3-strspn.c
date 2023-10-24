#include "main.h"
#include <stddef.h>
/**
 * _strspn - Gets length
 * @s: The main string
 * @accept: The second string
 * Return: Success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	if (s == NULL || accept == NULL)
		return (0);

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}
		if (found == 0)
			break;
		s++;
		accept -= count;
	}

	return (count);
}
