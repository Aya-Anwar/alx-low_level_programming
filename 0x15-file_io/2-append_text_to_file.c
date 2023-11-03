#include "main.h"
/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: file name
 * @text_content: text content
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd;
	char chars_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
	while (text_content[len])
	len++;
	chars_written = write(fd, text_content, len);
	if (chars_written == -1 || chars_written != len)
	{
		return (-1);
	}
	}
	close(fd);
	return (1);
}
