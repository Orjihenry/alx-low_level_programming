#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file.
 *
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: Success 1 or Fail -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, t, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != s)
			return (-1);
	}

	close(fd);

	return (1);
}
