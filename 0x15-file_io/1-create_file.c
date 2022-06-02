#include "main.h"

/**
 * create_file - creates a file and write into it
 * @filename: filename.
 * @text_content: content to  be written to the file.
 *
 * Return: 1 on success or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, sz;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[i] != '\0')
	{
		i++;
	}
	sz = write(fd, text_content, i);
	if (sz < 0)
		return (-1);
	close(fd);

	return (1);
}
