#include "main.h"
#include <stdlib.h>
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
fd = open("filename", O_RDWR);
if (fd == -1)
{
	return (0);
}
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
	return (0);
}
chars_read = (fd, buf, letters);
if (chars_read == -1)
{
	free(buf);
	return (0);
}
chars_written = write(fd, buf, letters);
if (chars_written == -1 || chars_written != chars_read)
{
	free(buf);
	return (0);
}
free(buf);
close (fd);
return (chars_written);

}
