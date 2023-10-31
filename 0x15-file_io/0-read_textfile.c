#include <stdio.h>
#include "main.h"

/**
 * read_textfile - A function that read atext file
 * and prints it to stdout
 * @filename: The name of the file to read
 * @letters: The number of letter to read and print
 *
 * Return: The Number of letter read and printed,
 * and o on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buffer;


	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);
	return (w);
}
