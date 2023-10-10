#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog
 *
 * @name: Name of dog
 *
 * @age: Age of dog
 *
 * @owner: Owner of dog
 *
 * Return: Pointer to the newly created dog (SUCCESS) or
 * NULL if insufficient memory was available (FAILURE)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_Dog;

	new_Dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_Dog == NULL)
	{
		return (NULL);
	}
	new_Dog->name = strdup(name);
	new_Dog->owner = strdup(owner);
	if (new_Dog->name == NULL || new_Dog->owner == NULL)
	{
		free(new_Dog->name);
		free(new_Dog->owner);
		free(new_Dog);
		return (NULL);
	}
	new_Dog->age = age;
	return (new_Dog);
}
