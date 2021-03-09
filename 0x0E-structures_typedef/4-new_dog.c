#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - pointer to a newly allocated space in memory.
 * @str: pointer of entry.
 * Return: nwstr.
 */
char *_strdup(char *str)
{
	int i;
	char *nwstr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0' ; i++)
	{
	}
	nwstr = malloc(sizeof(*nwstr) * i + 1);
	if (nwstr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] ; i++)
	{
		nwstr[i] = str[i];
	}
	nwstr[i] = '\0';
	return (nwstr);
}

/**
 * new_dog - create new dog.
 * @name: name of the dog.
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = _strdup(name);
	if (dog->name == 0)
	{
		free(dog);
		return (0);
	}
	dog->age = age;
	dog->owner = _strdup(owner);
	if (dog->owner == 0)
	{
		free(dog->name);
		free(dog);
		return (0);
	}
	return (dog);
}
