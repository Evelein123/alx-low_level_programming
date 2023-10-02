#include "main.h"

/**
 * read_textfile - reads a text file and prints POSIX standard output.
 * @filename: name of the file to read and print
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *         if the file can not be opened or read, return 0
 *         if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	nread = read(fd, buffer, letters);
	close(fd);
	if (nread == -1)
	{
		free(buffer);
		return (0);
	}
	nwritten = write(STDOUT_FILENO, buffer, nread);
	free(buffer);
	if (nwritten == -1 || nread != nwritten)
		return (0);
	return (nwritten);
}
