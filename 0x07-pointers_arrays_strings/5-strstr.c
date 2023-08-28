#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string
 * @needle: pointer to the substring
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	/* loop through the haystack string */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* loop through the needle substring */
		for (i = 0; haystack[i] != '\0'; i++)
		{
			/* loop through the needle substring */
			for (j = 0, k = i; needle[j] != '\0'; j++, k++)
			{
				/* if the current character  does not match the current of needle */
				if (haystack[k] != needle[j])
				{
					/* break the inner loop and continue the outer loop */
					break;
				}
			}
			/* if the inner loop reached the end  means a match was found */
			if (needle[j] == '\0')
			{
				/* return the pointer of the located substring in haystack */
				return (haystack + i);
			}
		}
		/* if no match is found, return NULL */
		return (NULL);
	}
}
