#ifndef dog_h
#define dog_h

/**
 * struct dog - Contains the details of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner of dog
 *
 * Description: A stucture that contains parameters for the information
 * about each dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
