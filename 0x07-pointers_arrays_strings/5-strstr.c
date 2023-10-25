#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring
 * @haystack: The string to search within
 * @needle: The substring to search for
 * Return: Pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h, *n;

		h = haystack;
		n = needle;

		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);

		haystack = h + 1;
	}

	return (NULL);
}
