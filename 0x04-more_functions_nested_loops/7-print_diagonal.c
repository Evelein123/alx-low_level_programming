#include "main.h"

/**
 * print_diagonal - print a diagonal line using backslash (\) character
 *
 * @n: the number of times the backslash character should be printed
 *
 */
void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
