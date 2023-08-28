#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be found
 *
 * Description: This function finds
 * the first occurrence of the substring
 * needle in the string haystack.
 * The terminating null bytes (\0) are not
 * compared. It returns a pointer to
 * the beginning of the located substring,
 * or NULL if the substring is not found.
 *
 * Return: a pointer to the substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	/* loop through the haystack string */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* check if the first character of needle matches */
		if (haystack[i] == needle[0])
		{
			/* loop through the needle string */
			for (j = 0, k = i; needle[j] != '\0'; j++, k++)
			{
				/* if any character does not match, break */
				if (needle[j] != haystack[k])
				{
					break;
				}
			}
			/* if the end of needle is reached, return the pointer */
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	/* if no match is found, return NULL */
	return (NULL);
}
