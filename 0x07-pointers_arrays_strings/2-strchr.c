#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character
*@s: The string
 * @c: The character to locate
 * Return: Success 0..
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
