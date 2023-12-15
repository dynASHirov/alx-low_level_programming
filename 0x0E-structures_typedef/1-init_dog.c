#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: struct to initialize
 * @name: Dog's name
 * @Age: Dog's age
 * @owner: Dog's owner
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float Age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->Age = Age;
	d->owner = owner;
}