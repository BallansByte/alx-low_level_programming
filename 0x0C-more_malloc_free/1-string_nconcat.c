#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings with a maximum of n bytes from s2
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	char *result;
	unsigned int i, j;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[s1_len] != '\0')
	s1_len++;

	while (s2[s2_len] != '\0')
	s2_len++;

	if (n >= s2_len)
	n = s2_len;


	result = malloc(s1_len + n + 1);

	if (result == NULL)
	return (NULL);

	for (i = 0; i < s1_len; i++)
	result[i] = s1[i];


	for (j = 0; j < n; j++)
	result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
