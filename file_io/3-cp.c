#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_fd(int fd);
void copy_file(const char *src, const char *dest);

/**
 * main - entry point for cp program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exits with error codes on failure
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}

/**
 * copy_file - copies content from one file to another
 * @src: source file
 * @dest: destination file
 */
void copy_file(const char *src, const char *dest)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t rd, wr;

	fd_from = open(src, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fd_to = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		close_fd(fd_from);
		exit(99);
	}

	while ((rd = read(fd_from, buffer, 1024)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		close_fd(fd_from);
		close_fd(fd_to);
		exit(98);
	}

	close_fd(fd_from);
	close_fd(fd_to);
}

/**
 * close_fd - closes a file descriptor and handles errors
 * @fd: file descriptor
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
