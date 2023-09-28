#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int size = sizeof(unsigned long int) * 8;
	int i;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		if ((n >> i) & mask)
			break;
	}
	for (; i >= 0; i--)
	{
		if ((n >> i) & mask)
			putchar('1');
		else
			putchar('0');
	}
}
