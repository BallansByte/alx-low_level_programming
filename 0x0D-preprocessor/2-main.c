#include "1-pi.h"
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the name of the file it was compiled from.
* Print the filename using the __FILE__ macro
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
