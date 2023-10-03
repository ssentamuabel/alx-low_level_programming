#include "main.h"
/**
 *  read_textfile - read and print to the  stdout
 *  @filename: the neme of the file
 *  @letters: the size of the characters to be read
 *
 *  Return: the size of the written file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wrt;
	char *store;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	store = (char *)malloc(sizeof(char) * letters);

	if (!store)
		return (0);

	rd = read(fd, store, letters);
	wrt = write(STDOUT_FILENO, store, rd);

	close(fd);
	free(store);

	return (wrt);
}
