#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 * @filename: name of file.
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print or 0 if failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sz, sz2;
	char *c;

	if (!filename)
		return (0);

	c = (char *)malloc(letters * sizeof(char));
	if (!c)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	sz = read(fd, c, letters);
	sz2 = write(STDOUT_FILENO, c, sz);
	close(fd);
	free(c);
	return (sz2);
}
