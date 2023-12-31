#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: The modified string.
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/*Capitalize the first character of the string*/
		if (i == 0 && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		/* Capitalize characters following separators */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			if (islower(str[i + 1]))
			{
				str[i + 1] = toupper(str[i + 1]);
			}
		}
	}
	return (str);
}
