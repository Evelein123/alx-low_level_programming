#include <stdlib.h>

/**
 * word_count - counts the number of words in a string
 * @str: the string to count
 *
 * Return: the number of words in the string
 */
int word_count(char *str)
{
	int i, count;
	count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count;
	/* Check if str == NULL or str == "" */
	if (str == NULL || str[0] == '\0')
		return (NULL);
	/* Count the number of words in the string */
	count = word_count(str);
	if (count == 0)
		return (NULL);
	/* Allocate memory for the array of words */
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	/* Split the string into words */
	i = 0;
	for (j = 0; str[j]; j++)
	{
		if (str[j] != ' ' && (j == 0 || str[j - 1] == ' '))
		{
			/* Count the length of the word */
			len = 0;
			while (str[j + len] && str[j + len] != ' ')
				len++;
			/* Allocate memory for the word */
			words[i] = malloc((len + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				/* Free previously allocated memory if allocation fails */
				while (i--)
					free(words[i]);
				free(words);
				return (NULL);
			}
			/* Copy the word into the array */
			for (k = 0; k < len; k++)
				words[i][k] = str[j + k];
			words[i][k] = '\0';
			i++;
		}
	}
	words[i] = NULL;
	
	return (words);
}
