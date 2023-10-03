#include "main.h"
/**
 * append_text_to_file - Create a function that creates a file
 * @filename: name of the file
 * @text_content:  the contents in the file
 *
 * Return: 1 for success and -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters_len;
	int rwr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters_len = 0; text_content[letters_len]; letters_len++)
			;
		rwr = write(fd, text_content, letters_len);

		if (rwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
