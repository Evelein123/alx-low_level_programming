#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes the chsrscter c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *         on error. -1 is returned. and errno id det appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
