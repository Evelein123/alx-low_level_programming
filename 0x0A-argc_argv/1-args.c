#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argv;  /*Explicitly indicate that the argv parameter is unused*/
	printf("%d\n", argc - 1);
	return (0);
}
