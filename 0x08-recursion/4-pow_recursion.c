#include "main.h"
#include <unistd.h>
#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: The character
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _pow_recursion - calculates a value.
 * @x: The base number
 * @y: The exponent
 * Return: Success 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
