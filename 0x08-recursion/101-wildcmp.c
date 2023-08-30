#include "main.h"
#include <stdbool.h>

/**
 * wildcmp_helper - Recursive helper function to compare two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * @s1_index: The current index of string s1.
 * @s2_index: The current index of string s2.
 * @star_match: Flag indicating
 * if a match has been found after encountering '*'.
 *
 * Return: true if the strings can be considered identical, false otherwise.
 */

bool wildcmp_helper(char *s1, char *s2,
		int s1_index, int s2_index, bool star_match)
{
	/*Base case: reached end of both strings*/
	if (s1[s1_index] == '\0' && s2[s2_index] == '\0')
		return (true);
	/*Base case: encountered '*'*/
	if (s2[s2_index] == '*')
		return (wildcmp_helper(s1, s2, s1_index, s2_index + 1, true));
	/*Base case: reached end of one of the strings*/
	if (s1[s1_index] == '\0' || s2[s2_index] == '\0')
		return (false);
	/*Characters match or encountered '?'*/
	if (s1[s1_index] == s2[s2_index] || s2[s2_index] == '?')
		return (wildcmp_helper(s1, s2, s1_index + 1, s2_index + 1, false));
	/*Base case: previous character was '*' and no match found yet*/
	if (star_match)
		return (wildcmp_helper(s1, s2, s1_index + 1, s2_index, true));
	/*Base case: characters don't match*/
	return (false);
}

/**
 * wildcmp - Compares two strings and
 * checks if they can be considered identical.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	/*Call the helper function to compare the strings*/
	return (wildcmp_helper(s1, s2, 0, 0, false));
}
