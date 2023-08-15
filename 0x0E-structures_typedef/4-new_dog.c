#include "dog.h"
#include<stdlib.h>
/**
 *  _strlen - counts the string length
 *  @s: the address of the string
 *
 *  Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 *  _strcpy - make a copy of the string
 *  @dest: the address of the string
 *  @src: the source of the string
 *
 *  Return: address of the  destinattion
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
/**
 *  new_dog -  to create a new dog
 *  @name: the address of the name
 *  @age: the age of the dog
 *  @owner: the address of the owner
 *
 *  Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = _strlen(name);
	int len2 = _strlen(owner);
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
