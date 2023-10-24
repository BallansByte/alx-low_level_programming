#include "main.h"
#include <stddef.h>
/**
*_memcpy - copies bytes from memories
*@dest: Where the solution goes
*@src: where the solutionis from
*@n: byte quantity
*Return: success 0.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;


	if (d != NULL && s != NULL)
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
	}

	return (dest);
}
