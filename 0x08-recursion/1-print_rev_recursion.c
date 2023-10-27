#include "main.h"
#include <unistd.h>
/**
 * _print_rev_recursion - Print a string
 * @s: The string to be printed!
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		write(1, s, 1);
	}
}
