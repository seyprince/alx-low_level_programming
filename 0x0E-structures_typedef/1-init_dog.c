#include <stdio.h>
#include "main.h"
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = "spooky";
		d->age = "45";
		d->owner = "poo";
	}
}

