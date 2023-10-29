#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if successful, 1 if not
 */
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc == 3)
	{
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
