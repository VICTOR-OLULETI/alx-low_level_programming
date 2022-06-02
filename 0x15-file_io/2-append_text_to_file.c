#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: content to be added into file.
 *
 * Return: 1 on success or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, sz;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		sz =  write(fd, text_content, i);
		if (sz < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
