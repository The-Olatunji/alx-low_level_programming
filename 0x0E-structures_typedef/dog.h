#ifndef DOG_
#define DOG_
/**
  *struct dog - a dog structure
  *@name: first prop
  *@age: second prop
  *@owner: third
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/** dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);*/
#endif
