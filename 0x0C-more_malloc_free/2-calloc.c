#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return: On success, a pointer to the allocated memory.
 *         On failure or if nmemb or size is 0, returns NULL.
 *
 * Description: The _calloc function allocates memory for an array of nmemb
 * elements, each of size bytes. The allocated memory is set to zero. If nmemb
 * or size is 0, the function returns NULL. If the memory allocation fails,
 * the function also returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *byte_ptr;
	void *ptr;
	unsigned int total_size;
	unsigned int i;
	/* Check for 0 nmemb or 0 size */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* Calculate the total size to allocate */
	total_size = nmemb * size;
	/* Allocate memory */
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	/* Set the allocated memory to zero */
	byte_ptr = (unsigned char *)ptr;

	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;
	return (ptr);
}
