#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file
 * @filename: file read
 * @letters: to be read
 * Return: pnt - actual number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fread;
	ssize_t pnt;
	ssize_t t;

	fread = open(filename, O_RDONLY);
	if (fread == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	t = read(fread, buf, letters);
	pnt = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fread);
	return (pnt);
}
