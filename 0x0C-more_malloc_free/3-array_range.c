#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: On success, a pointer to the newly created array.
 *         On failure or if min > max, returns NULL.
 *
 * Description: The array_range function creates an array of integers that
 * contains all the values from min (included) to max (included), ordered from
 * min to max. If min is greater than max, the function returns NULL. If
 * memory allocation fails, the function also returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;
	/* Check if min > max */
	if (min > max)
		return (NULL);
	/* Calculate the size of the array */
	size = max - min + 1;
	/* Allocate memory for the array */
	arr = malloc(size * sizeof(int));
	/* Check if memory allocation failed */
	if (arr == NULL)
		return (NULL);
	/* Initialize the array */
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
