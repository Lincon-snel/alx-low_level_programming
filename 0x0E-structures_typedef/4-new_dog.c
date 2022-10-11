#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Return: structure's pointer
 *         or NULL if function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *copy_name, *copy_owner;
	int i, len_name = 0, len_owner = 0;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		len_name++;

	for (i = 0; owner[i]; i++)
		len_owner++;

	copy_name = malloc(len_name + 1);
	if (copy_name == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		copy_name[i] = name[i];
	copy_name[i] = '\0';

	copy_owner = malloc(len_owner + 1);
	if (copy_owner == NULL)
		return (NULL);

	for (i = 0; owner[i]; i++)
		copy_owner[i] = owner[i];
	copy_owner[i] = '\0';

	dog->name = copy_name;
	dog->age = age;
	dog->owner = copy_owner;

	return (dog);
}
