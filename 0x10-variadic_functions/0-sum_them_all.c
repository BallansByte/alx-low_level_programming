#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum.
 * @n: The number of parameters.
 *
 * Return:Success.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
