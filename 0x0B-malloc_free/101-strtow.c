#include<stdlib.h>
/**
 *  -strtow - splits a string into words
 *  @str: the address of the string
 *
 *  Return: the address to the array of strings
 */
char **strtow(char *str)
{
	int index = 0, i = 0;
	char *word1 = 0; 
	char **word = 0;
	char *temp = str;
	int count_word = 0;
	char *start;
	int length= 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*temp)
	{
		while (*temp && *temp == ' ')
			temp++;
		if (*temp)
			count_word++;
		while (*temp && *temp != ' ')
			temp++;
	}
	word = (char **)malloc((count_word + 1) * sizeof(char *));
	if (word == NULL)
		return (NULL);
	temp = str;
	while (*temp)
	{
		while (*temp && *temp == ' ')
			temp++;
		if (*temp == '\0')
			break;
		start = temp;
		while (*temp && *temp == ' ')
			temp++;
		length = temp -start;
		word[index] = (char *)malloc((length + 1) * sizeof(char));
		if (word[index] == NULL)
		{
			for (i = 0; i < index; i++)
				free(word[i]);
			free(word[i]);
			return (NULL);
		}
		word1 = word[index];
		while  (start < temp)
		{
			*word1 = *start;
			word1++;
			start++;
		}
		*word1 = '\0';
		index++;
	}
	word[index] = NULL;
	return (word);
}
