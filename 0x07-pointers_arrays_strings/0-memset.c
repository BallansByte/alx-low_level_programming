#include "main.h"
/**
*_memset - It fills memories
*@s: is a pointer
*@b: is a constant byte
*@n: the number of bytes
*Return: Success 0.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;

		i++;
	}
	return (s);
}
