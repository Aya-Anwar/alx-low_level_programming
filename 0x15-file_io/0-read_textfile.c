#include "main.h"
/**
 * read_textfile -  function that reads a text file and prints
 * @filename: A pointer to the name of the file.
 * @letters:  The number of letters the
 *           function should read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
ssize_t chars_read, chars_written;

if (filename == NULL)
{
	return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
	return (0);
}
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
	close(fd);
	return (0);
}
chars_read = read(fd, buf, letters);
if (chars_read == -1)
{
	free(buf);
	return (0);
}
chars_written = write(STDOUT_FILENO, buf, chars_read);
if (chars_written == -1 || chars_written != chars_read)
{
	free(buf);
	return (0);
}
close(fd);
return (chars_written);

}
