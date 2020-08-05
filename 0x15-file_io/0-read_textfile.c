#include "holberton.h"

/**
 *read_textfile - reads a text file and prints it to
 *the POSIX standard output.
 *@filename: filename.
 *@letters: number of letters printed.
 *Return: number letters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdate;
	ssize_t nread, nwrite;
	char *buffer;

	if (!filename)
		return (0);

	fdate = open(filename, O_RDONLY);

	if (fdate == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nread = read(fdate, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	close(fdate);

	free(buffer);

	return (nwrite);
}
