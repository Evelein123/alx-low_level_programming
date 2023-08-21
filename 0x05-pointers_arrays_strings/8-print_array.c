#include "main.h"

/**
 * print_array - print n elements at an array of integars.
 *
 * @n: elements parameter input
 * @a: string parameter input
 *
 * Return: None.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
