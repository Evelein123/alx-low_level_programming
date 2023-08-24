#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: The modified string.
 */

char *leet(char *str)
{
	char *original = "aAeEoOtTlL";
	char *leet = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; original[j] != '\0'; j++)
		{
			if (str[i] == original[j])
			{
				str[i] = leet[j];
				break;
			}
		}
	}
	return (str);
}
