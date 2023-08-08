#include "main.h"
/**
 *  concate - to concatenate the strings
 *  @ac: the length of the array
 *  @ptr: the new string pointer
 *  @av: the array of args
 *
 *  Return: pointer to new string
 */
char *concate(int ac, char *ptr, char **av)
{
	int i, j, index;

	index = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[index] = av[i][j];
			index++;
			j++;
		}
		ptr[index] = '\n';
		index++;
	}

	return (ptr);
}
/**
 *  argstostr - arguments to string
 *  @ac: the number of arguments
 *  @av: the array of arguments
 *
 *  Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	int total_len, j, i;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* find the number of charcters all togther */
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_len++;
			j++;
		}
		/* add the extra new line character */
		total_len++;

	}

	/* allocate memory for the new string */
	ptr = (char *)malloc(sizeof(char) * (total_len - 1));
	if (ptr == NULL)
		return (NULL);

	return (concate(ac, ptr, av));
}
