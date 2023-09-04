#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Creates a duplicate of a string.
 * @str: The string to be duplicated.
 *
 * Return: On success, a pointer to the newly allocated duplicate string.
 *         On failure or if str is NULL, returns NULL.
 *
 * Description: The _strdup function returns a pointer to a new string which is
 * a duplicate of the string str. Memory for the new string is obtained with
 * malloc, and can be freed with free. The function copies the contents of str
 * into the newly allocated memory,
 * including the null-terminating character.
 * If the memory allocation fails,
 * or if str is NULL, the function returns NULL.
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	char *duplicate = malloc(strlen(str) + 1);

	if (duplicate == NULL)
		return (NULL);
	strcpy(duplicate, str);
	return (duplicate);
}
