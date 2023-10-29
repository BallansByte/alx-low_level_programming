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
	int i, result = 0;
	char *arg;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		while (*arg)
		{
			if (*arg < '0' || *arg > '9')
			{
				printf("Error\n");
				return (1);
			}
		arg++;
		}
	result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
