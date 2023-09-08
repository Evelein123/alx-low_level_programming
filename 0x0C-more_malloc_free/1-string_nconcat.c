#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure, returns NULL.
 *
 * Description: The string_nconcat function concatenates s1 with the first n
 * bytes of s2. The resulting string is allocated in memory using malloc. If
 * the function fails to allocate memory, it returns NULL. If n is greater than
 * or equal to the length of s2, the entire s2 string is concatenated. If s1 or
 * s2 is NULL, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, concat_len;
	char *concat;
	/* Treat NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	/* Determine the length of the concatenated string */
	if (n >= len2)
		concat_len = len1 + len2;
	else
		concat_len = len1 + n;
	/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (concat_len + 1));
	if (concat == NULL)
		return (NULL);
	/* Copy the contents of s1 */
	strcpy(concat, s1);
	/* Concatenate the first n bytes of s2 */
	strncat(concat, s2, n);
	return (concat);
}
