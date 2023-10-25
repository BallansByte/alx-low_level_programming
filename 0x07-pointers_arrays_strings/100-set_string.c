#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * set_string - Set the value of a pointer to a char
 * @s: A pointer to a pointer to char (double pointer)
 * @to: A pointer to the string to assign to s
 */
void set_string(char **s, char *to)
{
	if (s != NULL)
	{
		*s = to;
	}
}
/**
*main -Main function
*Return: success 0
*/

int main(void)
{
	char *str1 = "Hello";
	char *str2 = "World";

	char *pointer_to_str = NULL;

	set_string(&pointer_to_str, str1);

	if (pointer_to_str != NULL)
	{
		printf("Pointer_to_str: %s\n", pointer_to_str);
	}

	set_string(&pointer_to_str, str2);

	if (pointer_to_str != NULL)
	{
		printf("Pointer_to_str: %s\n", pointer_to_str);
	}

	return (0);
}
