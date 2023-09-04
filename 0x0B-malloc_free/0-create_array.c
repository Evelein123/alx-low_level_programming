#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character used to initialize the array.
 *
 * Return: On success, a pointer to the created array. On failure, NULL.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (unsigned int i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
