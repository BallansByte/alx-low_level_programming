#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character
 * @c: The character to print
 * Return: success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _sqrt_recursive - Helper function
 * @n: The number.
 * @guess: The current guess.
 * Return: The square root.
 */
int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);

	return (_sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates square.
 * @n: The number.
 * Return: The square root.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	return (_sqrt_recursive(n, 0));
}
