#include "main.h"
/**
 * create_file - Crete a function that creates a file
 * @filename: the name of the file
 * @text_content: the contents of the  file
 * Return: 1 for success and 0 for failur
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letterslen;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letterslen = 0; text_content[letterslen]; letterslen++)
		;

	rwr = write(fd, text_content, letterslen);
	if (rwr == -1)
		return (-1);
	close(fd);

	return (1);
}
