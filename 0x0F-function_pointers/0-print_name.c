#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints a name.
 * @name: This is the name to be printed.
 * @f: This is a function pointer that points to
 * the function that prints the name.
 *
 * Description: This function takes a name
 * and a function pointer as parameters.
 * The function pointer points to the function
 * that prints the name. The actual
 * printing function (either print_name_as_is or
 * print_name_uppercase) is determined
 * at runtime. This demonstrates the use of function pointers in C.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
