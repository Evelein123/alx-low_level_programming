#include "main.h"

/**
 * factorial - Computes the factorial of a number.
 * @n: The number to compute the factorial of.
 *
 * Return: The factorial of the number.
 *         -1 if the number is negative.
 */

int factorial(int n)
{
	if (n < 0) /*Base case: invalid input*/
		return (-1);
	if (n == 0) /* Base case: factorial of 0 is 1*/
		return (1);
	/*Recursively call the function with n-1*/
	return (n * factorial(n - 1)); /*Recursively call the function with n-1*/
}

