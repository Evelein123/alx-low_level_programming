#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to an array of integers
 * @size: size of the matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;
	/* initialize the sums to zero */
	sum1 = 0;
	sum2 = 0;
	/* initialize the sums to zero */
	sum1 = 0;
	sum2 = 0;
	/* loop through the matrix */
	for (i = 0; i < size; i++)
	{
		/* calculate the index of the element in the first diagonal */
		j = i * size + i;
		/* add the element to the first sum */
		sum1 += a[j];
		/* calculate the index of the element in the second diagonal */
		j = i * size + (size - 1 - i);
		/* add the element to the second sum */
		sum2 += a[j];
	}
	/* print the sums separated by a comma and a space */
	printf("%d, %d\n", sum1, sum2);
}
