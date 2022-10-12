#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *new_dog-A function that creates a new dog
 *
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 *
 *Return: Return a dog object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, length_name, length_owner;
	char *name_copy, *owner_copy;
	dog_t *new_dog;

	length_name = strlen(name);
	length_owner = strlen(owner);
	new_dog = malloc(sizeof(dog_t));
	name_copy = malloc(sizeof(char) * (length_name + 1));

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	if (new_dog == NULL)
		return (NULL);

	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	else
	{
		for (i = 0; name[i] != '\0'; i++)
		{
			name_copy[i] = name[i];
		}
		name_copy[i] = '\0';
	}

	new_dog->name = name_copy;
	new_dog->age = age;

	owner_copy = malloc(sizeof(char) * (length_owner + 1));

	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	else
	{
		for (i = 0; owner[i] != '\0'; i++)
		{
			owner_copy[i] = owner[i];
		}
		owner_copy[i] = '\0';
	}
	new_dog->owner = owner_copy;
	return (new_dog);
}

