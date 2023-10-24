#include "main.h"
#include <stdio.h>
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard.
 * @a: The 2D array representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			putchar(a[row][col]);
			if (col < 7)
				putchar(' ');
			col++;
		}
		putchar('\n');
		row++;
	}
}
