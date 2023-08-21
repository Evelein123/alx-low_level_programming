#include "main.h"

/**
 * swap_int - Swaps the values of two integers using two input parameters.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: None.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
