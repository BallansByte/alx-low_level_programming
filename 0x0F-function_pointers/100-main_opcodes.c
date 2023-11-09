#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 * Return:success.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
	printf("Error\n");
	return (2);
	}

	char *main_address = (char *)main;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
	printf("%02x", main_address[i] & 0xFF);
	}
	printf("\n");

	return (0);
}
