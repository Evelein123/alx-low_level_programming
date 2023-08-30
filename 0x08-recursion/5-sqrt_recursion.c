#include "main.h"

/**
 * sqrt_helper - Recursive helper function to compute the square root.
 * @n: The number to compute the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of the number.
 *         -1 if the number does not have a natural square root.
 */

int sqrt_helper(int n, int guess)
{
	if (guess * guess == n) /* Base case: found the square root*/
		return (guess);
	/* Base case: no natural square root*/
	if (guess * guess > n)
		return (-1);
	/*Recursively call the function with the next guess*/
	return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: The square root of the number.
 *         -1 if the number does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /*Base case: invalid input*/
		return (-1);
	/*Call the helper function to compute the square root*/
	return (sqrt_helper(n, 0));
}
