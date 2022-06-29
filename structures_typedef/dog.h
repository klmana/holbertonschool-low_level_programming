#ifndef DOG_H
#define DOG_H

/**
 *struct dog - Define a new type struct dog with the following elements
 *@name: The dog name
 *@age: The dog age
 *@owner: The owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
