#include "main.h"

/**
 * times_table - prints the multiplication table for the numbers 0 to 9
 *
 * This function generates a 10x10 multiplication table
 * where each row represents
 * a number from 0 to 9, and each column represents
 * the result of multiplying that
 * number by another number from 0 to 9. The table is printed to the console.
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchat(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchat('.');
			_putchat(' ');

			prod = num * mult;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*get the first digit*/

			_putchar((prod / 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
