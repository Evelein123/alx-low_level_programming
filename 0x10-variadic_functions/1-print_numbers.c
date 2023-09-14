#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n); /*initialize args to store all values after n*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int)); /*print each number*/
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator); /*print separator*/
	}
	printf("\n"); /*print new line*/
	va_end(args); /*clean memory reserved for args*/
}
