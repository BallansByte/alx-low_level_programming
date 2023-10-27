#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: The character to print
 * Return: success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * factorial - calculates the factorial
*@n: The number
 * Return: Success 0..
 */
int factorial(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		int result = 1;

		while (n > 1)
		{
			result *= n;
			n--;
		}
		return (result);
	}
}
/**
 * main - entry function
 *Return: success
 */

int main(void)
{
	int n = 5;

	int result = factorial(n);

	if (result != -1)
	{
		char c;

		int sign = 1;
		int temp = result;

		if (result < 0)
		{
			sign = -1;
			temp = -temp;
		}

		while (temp > 0)
		{
			c = (temp % 10) + '0';
			_putchar(c);
			temp = temp / 10;
		}

		if (sign == -1)
		{
			_putchar('-');
		}

		_putchar('\n');
	}

	return (0);
}

