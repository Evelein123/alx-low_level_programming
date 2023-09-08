#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;
        /* loop through the source memory area and copy each byte to destination */
        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }
        /* return the pointer to the destination memory area */
        return (dest);
}
