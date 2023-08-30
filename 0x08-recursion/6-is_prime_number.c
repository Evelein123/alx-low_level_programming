#include "main.h"

/**
 * is_prime_helper - Recursive helper function to check if a number is prime.
 * @n: The number to check.
 * @divisor: The current divisor to check divisibility.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_helper(int n, int divisor)
{
	if (n < 2) /*Base case: numbers less than 2 are not prime*/
		return (0);
	/*Base case: reached the end of the recursion without finding a divisor*/
	if (divisor == n)
		return (1);
	/*Base case: found a divisor other than 1 and n*/
	if (n % divisor == 0)
		return (0);
	/* Recursively call the function with the next divisor*/
	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	/*Call the helper function to check if the number is prime*/
	return (is_prime_helper(n, 2));
}
