#include "main.h"
/**
 * create_file -  a function that creates a file.
 * @filename: pointer to the file path
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	int wc;


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = creat(filename, O_RDWR);
		if (fd == -1)
			return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC,
			S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	wc = write(fd, text_content, len);
	if (wc == -1)
		return (-1);
	close(fd);

	return (1);
}

