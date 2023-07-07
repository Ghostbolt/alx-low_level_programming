#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to a string
 * Return: If the function fails ret -1
 */
int create_file(const char *filename, char *text_content)
{
	int fread, pnt, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	fread = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	pnt = write(fread, text_content, len);

	if (fread == -1 || pnt == -1)
	{
		return (-1);
	}
	close(fread);

	return (1);
}
