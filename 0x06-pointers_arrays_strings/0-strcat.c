#include "main.h"
/**
 * _strcat - joins two strings
 * @dest: Where the finall answer goes
 * @src: The source string..
 * Return: A pointer.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
