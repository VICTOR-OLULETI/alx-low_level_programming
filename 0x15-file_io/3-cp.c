#include "main.h"
#include <stdio.h>

/**
 * _error - checks for errors
 * @file_from: file to be copied
 * @file_to: file to be copied to
 * @argv: arguments
 *
 * Return: void.
 */
void _error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't wirte to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies file content from file_from to file_to
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t nchars, sz;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	_error(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars < 0)
			_error(-1, 0, argv);
		sz = write(file_to, buf, nchars);
		if (sz < 0)
			_error(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
