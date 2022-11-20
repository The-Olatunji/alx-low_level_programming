#include <stdio.h>
#include <stdlib.h>
/**
  *free_dog - frees dogs
  *@d: pointer to type dog_t
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free (d);
		free(d->name);
		free(d->owner);
	}
}
