#ifndef DOG_
#define DOG_
/**
  *struct dog - a dog structure
  *@name: first prop
  *@age: second prop
  *@owner: third
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
