#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
  *new_dog - create a new instance of dog
  *@name: name member of the dog
  *@age: age member of the dog
  *@owner: owner member of the dog
  *Return: pointer to the new dog_t
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;
	char *temp_name;
	char *temp_owner;

	temp_name = malloc(sizeof(*name) * (strlen(name) + 1));
	temp_owner = malloc(sizeof(*owner) * (strlen(name) + 1));
	bingo = malloc(sizeof(dog_t));

	if (bingo && temp_name && temp_owner)
	{
		strcpy(temp_name, name);
		strcpy(temp_owner, owner);
		bingo->name = temp_name;
		bingo->owner = temp_owner;
		bingo->age = age;

	}
	else
	{
		free(temp_owner);
		free(temp_name);
		free(bingo);
		return (NULL);
	}
	return (bingo);
}
