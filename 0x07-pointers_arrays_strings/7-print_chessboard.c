#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an array of 8 arrays of 8 characters
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	/* loop through the rows of the array */
	for (i = 0; i < 8; i++)
	{
		/* loop through the columns of the array */
		for (j = 0; j < 8; j++)
		{
			/* print the character at the current position */
			_putchar(a[i][j]);
		}
		/* print a new line after each row */
		_putchar('\n');
	}
}
