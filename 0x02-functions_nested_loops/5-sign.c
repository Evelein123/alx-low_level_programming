#include "main.h"

/**
 * print_single - Determines if the input number
 * greater, iqual or less the zero.
 *
 * @n: The input number as an integer.
 *
 * Return: 1 is greter than zero. 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(48);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

}
