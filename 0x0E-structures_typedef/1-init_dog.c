#include "dog.h"
#include <stdio.h>
/**
  *init_dog - init a variable of type Struct dog
  *@d: a Struct
  *@age: a float
  *@owner: owner string
  *@name: a string
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
