#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialises struct
 * @d: pointer to struct 
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
