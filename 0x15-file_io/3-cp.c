#include "main.h"
#include<stdio.h>

void error(int file_from, int file_to,char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	
}
int main(int arg, char *argv[])
{
	int file_from;
	int file_to;
	ssize_t nchars, nwr;
	int close_file;
	char buff[1024];

	if (arg != 3)
	{
		dprintf(STDERR_FILENO,"%s\n","Usage: cp file_from file_to");
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	error(file_from,file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buff, 1024);
		if (nchars == -1)
			error(-1, 0, argv);
		nwr = write(file_to, buff, 1024);
		if (nwr == -1)
			error(0, -1, argv);
		
	}

	close_file = close(file_from);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", file_from);
		exit(100);
	}
	close_file = close(file_to);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", file_to);
		exit(100);
	}
	return (0);
}


