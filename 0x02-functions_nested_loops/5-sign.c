#include "main.h"

/**
 * print_sign - Determines whether the input number is greater than,
 * equal to, or less than zero.
 *
 * @n: The input number as an integer.
 *
 * Return: 1 if the number is greater than zero,
 *          0 if the number is zero, -1 if the number is less than zero.
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
