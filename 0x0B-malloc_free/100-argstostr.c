#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;
	/* Check if ac == 0 or av == NULL */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* Calculate the length of the new string */
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	/* Allocate memory for the new string */
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	/* Concatenate the arguments into the new string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
