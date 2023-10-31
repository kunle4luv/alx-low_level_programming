#include "main.h"
#define BUFFER_SIZE 1024
#define ERR STDERR_FILENO
/**
 * main - program to copy file from one file to another
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0
 */

int main(int ac, char *av[])
{
	int fd, fd1, cl1, cl2;
	ssize_t wc, rc;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
	{
		dprintf(ERR, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(av[1], O_RDONLY);
	rc = read(fd, buffer, BUFFER_SIZE);
	if (av[1] == NULL || fd == -1 || rc == -1)
	{
		dprintf(ERR, "Error: Can't read from file %s", av[1]);
		exit(98);
	}

	fd1 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wc = write(fd1, buffer, rc);
	if (fd1 == -1 || wc == -1)
	{
		dprintf(ERR, "Error: can't write to %s\n", av[2]);
		exit(99);
	}
	cl1 = close(fd);
	cl2 = close(fd1);

	if (cl1 != 0)
	{
		dprintf(ERR, "Error: can't close fd %d\n", fd);
		exit(100);
	}
	if (cl2 != 0)
	{
		dprintf(ERR, "Error: can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
