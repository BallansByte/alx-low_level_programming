#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of its parameters.
 * @n: The number of parameters.
 * @...: The parameters to sum.
 *
 * Return: The sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - Prints numbers, separated by a given separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of parameters.
 * @...: The numbers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - Prints strings, separated by a given separator.
 * @separator: The string to be printed between strings.
 * @n: The number of parameters.
 * @...: The strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - Prints anything based on the format specifier.
 * @format: The format specifier to determine the type of parameters.
 * @...: The parameters to print.
 */
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
