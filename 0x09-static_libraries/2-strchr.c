#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to locate
 *
 * Return: a pointer to the first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
        /* loop in string until reaching the null terminator or the character c */
        while (*s != '\0' && *s != c)
        {
                s++; /* move the pointer to the next character */
        }
        /* if c is found, return the pointer to it, otherwise return NULL */
        return (*s == c ? s : NULL);
}
