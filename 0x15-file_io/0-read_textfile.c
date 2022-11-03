#include "main.h"

/**
 *read_textfile- A function that reads and outputs the name of the file.
 *
 *@filename:The file to be read.
 *@letters: Number of leters the function should read and print.
 *
 *Return: The text that have ben read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readF, writeF;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	readF = read(fd, buffer, letters);

	if (readF == -1)
		return (0);

	writeF = write(STDOUT_FILENO, buffer, readF);

	if (writeF == -1)
		return (0);

	free(buffer);
	close(fd);
	return (writeF);
}

