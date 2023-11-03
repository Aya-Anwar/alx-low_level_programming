#include"main.h"

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 * @argc: argument counters
 * @argv: pointers to argument
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int fd_file_from;
	int fd_file_to;
	char buff[1024];
	ssize_t chars_written;
	ssize_t chars_read;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to", 28);
		exit(97);
	}
	fd_file_from = open(argv[1], O_RDONLY);
	if (fd_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	fd_file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_file_to == -1)
	{
		dprintf (STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	while (chars_read != 0)
	{
		chars_read = read(fd_file_from, buff, 1024);
		{
			if (chars_read == -1)
			{
			     dprintf (STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
			     exit (98);
			}
			chars_written = write(fd_file_to, buff, chars_read);
			if (chars_written == -1 || chars_written != chars_read)
			{
			     dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			     exit(99);
			}
		}
	}
	if (close (fd_file_to == -1))
	{
		dprintf (STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit (100);
	}
	if (close (fd_file_from == -1))
	{
		dprintf (STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit (100);
	}
	return (0);

}
