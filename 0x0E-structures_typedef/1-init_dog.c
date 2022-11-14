#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  a function that init a variable of type struct dog
 * @d: pointer to dog struct
 * @name: string input for name
 * @age: input for dog's age
 * @owner: string input for dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
