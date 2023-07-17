#include <stdio.h>
#include "dog.h"

/**
 * init_dog - this function initialize a variable of type struct dog
 * @d: pointer to the variable
 * @name: value of the stuct dog's name field.
 * @age: value of the struct dog's age field.
 * @owner: value of the struc dog's owner field.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
